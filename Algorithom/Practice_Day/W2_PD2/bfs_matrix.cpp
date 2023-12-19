#include<bits/stdc++.h>
using namespace std;
const int N = 100;

int visited[N];
int adj_matrix[N][N];
int nodes, edges;

void bfs(int src){
    queue<int>q;

    visited[src] = 1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout<<head<<" ";

        for(int i = 0; i<nodes; i++){
            if(adj_matrix[head][i] == 1 && visited[i] == 0){
                visited[i] = 1;
                q.push(i);
            }
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
    bfs(src);

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