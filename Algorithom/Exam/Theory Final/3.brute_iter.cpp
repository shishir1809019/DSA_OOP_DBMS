
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
int n;
int dp[N];
int main()
{
    cin>>n;
    
    dp[0] = 0;
    for(int i = 1; i<=n; i++){
        dp[i] = max({1+dp[i-1], 2+dp[i-3], 3+dp[i-5]});
    }

    cout<<dp[n]<<endl;
    
    return 0;
}