#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
int level[N];

vector<int> adj_list[N];

void dfs(int src){
    visited[src] = 1;

    for(int adj_node:adj_list[src]){
        if(visited[adj_node] == 0){
            level[adj_node] = level[src]+1;
            dfs(adj_node);
        }
        else if(level[adj_node] > level[src]+1){
            level[adj_node] = level[src] + 1;
        }
    }
}

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i =0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    int src = 0;
    level[src] = 0;
    dfs(src);
    for(int i = 0; i<nodes; i++){
        cout<<"nodes:"<<i<<"->"<<"level: "<<level[i]<<endl;
    }
}

