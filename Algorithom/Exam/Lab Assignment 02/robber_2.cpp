#include<bits/stdc++.h>
using namespace std;


int dp[101];
int solve(int i, vector<int> &nums){
    if(i>=nums.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    
    int take = solve(i+2, nums) + nums[i];
    int notaken = solve(i+1, nums) + 0;


    return dp[i]=max(take, notaken);
}
int main()
{
    vector<int> nums  = {1,2,3};
    int n = nums.size();
    if(n==1) return nums[0];
    int start = nums[0], end=nums[n-1];

    for(int i = 0;i<=n; i++){
        dp[i] = -1;
    }

    nums.pop_back();
    int ans1 = solve(0, nums);

    for(int i = 0;i<=n; i++){
        dp[i] = -1;
    }
    nums.push_back(end);
    nums.erase(nums.begin());
    int ans2 = solve(0, nums);


    cout<<max(ans1, ans2)<<endl;
    return 0;
}