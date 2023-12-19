#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
vector<string> grid;
vector<vector<int>> dp;

ll solve(int n, int m){
    if(n==1 && m==1) return 1;
    if(grid[n-1][m-1] == '#') return 0;

    if(dp[n][m] != -1) return dp[n][m];
    int ans = 0;
    if(n>1) ans += solve(n-1, m);
    if(m>1) ans += solve(n, m-1);

    return dp[n][m]=ans%mod;
}

int main()
{

    int n, m;
    cin>>n>>m;
    grid.resize(n+1);
    dp.resize(n+1, vector<int>(m+1, -1));
    for(int i = 0; i<n; i++){
        cin>>grid[i];
    }

    cout<<solve(n,m)<<endl;

    return 0;
}