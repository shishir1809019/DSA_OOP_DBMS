#include<bits/stdc++.h>
using namespace std;
const int N = 3003;
string s,t;
int n, m;
int dp[N][N];

int LCS(int i, int j){
    if(i==n || j==m) return 0;

    if(dp[i][j] != -1) return dp[i][j];
    if(s[i] == t[j]){   
        return dp[i][j] = 1 + LCS(i+1, j+1);
    }
    return dp[i][j] = max(LCS(i+1, j), LCS(i, j+1));
}

int main()
{
    cin>>s>>t;
    n = s.length();
    m = t.length();

    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=m; j++){
            dp[i][j] = -1;
        }
    }
    int ans = LCS(0,0);
    cout<<n-ans+m-ans<<endl;
}