#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3};
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int ans =  max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    cout<<ans<<endl;
    
    return 0;
}