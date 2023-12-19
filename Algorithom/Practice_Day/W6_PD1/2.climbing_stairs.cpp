#include<bits/stdc++.h>
using namespace std;
int const N = 50;
int dp[N],n;


int solve(int step){
    if(step>n) return 0;
    if(step==n) return 1;

    if(dp[step] != -1) return dp[step];

    int ans = solve(step+1)+solve(step+2);
    dp[step] = ans;

    return ans;
}

int main()
{
    cin>>n;
    for(int i =0; i<=n; i++){
        dp[i] = -1;
    }
    // cout<<solve(0)<<endl;
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    for(int i = 0; i<=n; i++){
        cout<<dp[i]<<endl;
    }
    return 0;
}