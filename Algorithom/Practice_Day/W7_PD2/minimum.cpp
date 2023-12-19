#include<bits/stdc++.h>
using namespace std;

int dp[200][200];

int solve(vector<vector<int>> &grid,int n, int m){
    if (n < 0 || m < 0)
        return INT_MAX;
    if(n==0 && m==0) return grid[n][m];

    if(dp[n][m] != -1) return dp[n][m];

    int ans1 = solve(grid, n-1, m);
    int ans2 = solve(grid, n, m-1);

    int ans = grid[n][m] + min(ans1, ans2);
    return dp[n][m] = ans;
}

int main()
{
    vector<vector<int>> grid = {{1,3,1},{1,5,1}, {4,2,1}};

    int n = grid.size();
    int m = grid[0].size();

    for(int i =0 ;i<=n; i++){
        for(int j = 0; j<=m; j++){
            dp[i][j] = -1;
        }
    }

    cout<<solve(grid, n-1,m-1)<<endl;

    return 0;
}