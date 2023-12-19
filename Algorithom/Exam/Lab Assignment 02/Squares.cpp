#include<bits/stdc++.h>
using namespace std;

int dp[10005];
int solve(int n){
    if(n==0) return 0;
    if(dp[n] != -1) return dp[n];
    int ans = n;
    for(int i = 1; i*i<=n; i++){
        int temp = i*i;
        ans = min(ans, 1+solve(n-temp)); //O(n*sqrt(n))
    }
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n+1; i++){
        dp[i] = -1;
    }
    cout<<solve(n)<<endl;
    
    return 0;
}