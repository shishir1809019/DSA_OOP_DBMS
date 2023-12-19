#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;

int main()
{

    int n, m;
    cin>>n>>m;
    vector< vector<ll>> dp(n+1, vector<ll> (m+1,0));
    dp[0][0] = 1;

    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        for(int j = 0; j<m; j++){
            if(s[j]=='.'){
                if(i>0){
                    dp[i][j] += dp[i-1][j];
                    dp[i][j]%=mod;
                }
                if(j>0){
                    dp[i][j] += dp[i][j-1];
                    dp[i][j]%=mod;
                }
            }
            else dp[i][j] = 0;
        }
    }

    cout<<dp[m-1][n-1]<<endl;

    return 0;
}