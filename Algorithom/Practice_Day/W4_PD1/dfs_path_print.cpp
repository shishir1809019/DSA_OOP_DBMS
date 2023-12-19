#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;

int visited[N],level[N],parent[N];
vector<int> adj_list[N];

void dfs(int src){
    visited[src] = 1;

    for(int adj_node: adj_list[src]){
        if(visited[adj_node] == 0){
            parent[adj_node] = src;
            level[adj_node] = level[src] + 1;
            dfs(adj_node);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i = 0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 1;
    level[src] = 1;
    dfs(src);
    int dest_node = n;
    
    if(visited[dest_node] == 0){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    cout<<level[dest_node]<<endl;

    vector<int> path;
    int selected_node = dest_node;

    while (true)
    {
        path.push_back(selected_node);
        if(selected_node == 1) break;
        selected_node = parent[selected_node];
    }
    reverse(path.begin(), path.end());

    for(int node: path){
        cout<<node<<" ";
    }
    

    return 0;
}