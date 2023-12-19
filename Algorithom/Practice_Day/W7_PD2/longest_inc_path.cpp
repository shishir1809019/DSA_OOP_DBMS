#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> matrix = { { 1, 2, 3, 4 },
                  { 2, 2, 3, 4 },
                  { 3, 2, 3, 4 },
                  { 4, 5, 6, 7 } };
// vector<vector<int>> dp;
int dp[205][205];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

int is_valid(int x, int y){
    if(x<0 || x>=matrix.size()) return false;
    if(y<0 || y>=matrix[0].size()) return false;
    return true;
}

int LIP(int row, int col){
    int maxim = 0;

    if(dp[row][col] != -1)
        return dp[row][col];

    for(int i =0 ;i <4; i++){
        int new_x = dx[i] + row;
        int new_y = dy[i] + col;

        if(is_valid(new_x, new_y) && matrix[new_x][new_y] > matrix[row][col]){
            maxim = max(maxim, 1+LIP(new_x, new_y));
        }
    }

    return dp[row][col] = maxim;
}

int main()
{
    
    int n = matrix.size(),m = matrix[0].size();
    for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            dp[i][j] = -1;
        }
    }
    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            ans=max(ans,LIP(i,j));
        }
    }

    cout<<ans+1<<endl;
}