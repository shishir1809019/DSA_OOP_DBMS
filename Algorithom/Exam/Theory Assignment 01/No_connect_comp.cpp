#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

int nodes, edges;

void dfs(int node){
    visited[node] = 1;

    for(int adj_node:adj_list[node]){
        if(visited[adj_node] == 0){
            dfs(adj_node);
        }
    }
} 

int number_of_component(){
    int count = 0;
    for(int i = 1; i<=nodes; i++){
            if(visited[i] == 0){
                count++;
                dfs(i);
        }
    }
    return count;
}

int main()
{
    cin>>nodes>>edges;

    for(int i =0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    cout<<number_of_component()<<endl;
}