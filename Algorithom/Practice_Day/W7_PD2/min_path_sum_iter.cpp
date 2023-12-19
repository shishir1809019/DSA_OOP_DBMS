#include<bits/stdc++.h>
using namespace std;
// int dp[200][200];
vector<vector<int>> dp;

int main()
{
    vector<vector<int>> grid = {{1,3,1},{1,5,1}, {4,2,1}};
    dp = grid;
    int n = grid.size();
    int m = grid[0].size();

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if (i > 0 && j > 0)
                dp[i][j] +=  min(dp[i-1][j], dp[i][j-1]);
            else if (i > 0)
                dp[i][j] +=  dp[i-1][j];
            else if(j>0)
                dp[i][j] +=  dp[i][j-1];
        }
    }

    cout<<dp[n-1][m-1]<<endl;
    return 0;
}