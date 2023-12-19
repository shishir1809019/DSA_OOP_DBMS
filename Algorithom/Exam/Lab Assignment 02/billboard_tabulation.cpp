#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> rods = {1,2,3,6};
    int n = rods.size();
    vector<vector<int>> dp(n + 1, vector<int>(5010, -5010)); 
    int sum = 0;
    for(int x:rods) sum+=x;

    dp[0][0] = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<=sum; j++){
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
            int x = rods[i-1];

            if(j+x<=sum) dp[i][j+x] = max(dp[i][j+x], dp[i-1][j]);
            if(x<=j) dp[i][j-x] = max(dp[i][j-x], dp[i-1][j]+x);
            else dp[i][x-j] = max(dp[i][x-j], dp[i-1][j]+j);
        }
    }
    cout<<dp[n][0]<<endl;

    return 0;
}