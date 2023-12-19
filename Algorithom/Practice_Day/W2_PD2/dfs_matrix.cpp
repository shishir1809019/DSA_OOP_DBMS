#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int nodes, edges;

int adj_matrix[N][N] = {};
int visited[N];

void dfs(int node)
{
    cout<<node<<" ";
    visited[node] = 1;

    for(int  i = 0; i<nodes; i++){
        if(adj_matrix[node][i] == 1 && visited[i] == 0){
            dfs(i);
        }
    }
}

int main()
{
    cin>>nodes>>edges;

    for(int i = 0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        adj_matrix[u][v] = 1;
        adj_matrix[v][u] = 1;
    }
    int src = 0;
    dfs(src);
    return 0;
}

/*
6 6
0 1
1 2
2 3
1 5
2 4
5 4
*/ 