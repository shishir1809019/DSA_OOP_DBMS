#include<bits/stdc++.h>
using namespace std;


int dp[101];
int tabulation(vector<int>& nums){
    if(nums.size() < 2) return nums[0];
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int i = 2; i<nums.size(); i++){
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }   
        return dp[nums.size() - 1];
}
int main()
{
    vector<int> nums  = {1,2,3};
    int n = nums.size();
    if(n==1) return nums[0];
    int start = nums[0], end=nums[n-1];

    nums.pop_back();
    int ans1 = tabulation(nums);

    nums.push_back(end);
    nums.erase(nums.begin());
    int ans2 = tabulation(nums);


    cout<<max(ans1, ans2)<<endl;
    return 0;
}