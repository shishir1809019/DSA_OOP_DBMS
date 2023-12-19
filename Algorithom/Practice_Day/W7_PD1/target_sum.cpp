#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int n, nums[N];

int dp[200][N];
int cnt;
int target_sum(int n, int target){
    if(n==0 && target ==0){
        return 1;
    }
    if(n<=0) return 0;

    if(dp[n][target] != -99999999) return dp[n][target];

    int ans1 = target_sum(n-1, target-nums[n]);
    int ans2 = target_sum(n-1, target+nums[n]);
    
    int ans = ans1 + ans2;
    
    dp[n][target] = ans;

    return ans;
}

int main()
{
    int target;
    cin>>n>>target;
    
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=target; j++){
            dp[i][j] = -99999999;
        }
    }

    for(int i = 1; i<=n; i++){
        cin>>nums[i];
    }


    cout<<target_sum(n, target)<<endl;

}