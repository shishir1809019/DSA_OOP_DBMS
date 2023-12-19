#include<bits/stdc++.h>
using namespace std;

int main () {
    int m, n;
    cin>>m>>n;

    int maze[m][n];

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>maze[i][j];
        }
    }

    for(int i=m-1;i>=0;i--) {
        for(int j=0;j<n;j++) {
            if(i==m-1 and j==0) continue;
            else if(i==m-1) maze[i][j]+=maze[i][j-1];
            else if(j==0) maze[i][j]+=maze[i+1][j];
            else maze[i][j]+=max(maze[i+1][j],maze[i][j-1]);
        }
    }
    cout<<maze[0][m]<<endl;

    return 0;
}