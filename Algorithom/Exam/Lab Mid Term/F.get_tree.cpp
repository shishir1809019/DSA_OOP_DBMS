#include<bits/stdc++.h>
using namespace std;
const int N = 101;

vector<int> adj_list[N];
int visited[N];
vector<pair<int,int>>edge;
set<pair<int,int>> remove_edge;


// int parent_node = -1;
void dfs(int node,int parent_node)
{
    visited[node] = 1;
    for(int adj_node: adj_list[node]){
        if(!visited[adj_node]){
            // parent_node = node;
            dfs(adj_node, node);
        }
        else if(adj_node != parent_node){
            remove_edge.insert({adj_node, node});
            remove_edge.insert({node, adj_node});
        }
    }
}

int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i =0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
        edge.push_back({u,v});
    }
    dfs(1,-1);
    for(int i=0;i<edge.size();i++)
    {
        int u=edge[i].first;
        int v=edge[i].second;
        if(!remove_edge.count({u,v})) cout<<u<<" "<<v<<endl;
    }

    return 0;
}
