#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
const int n = 1e2+1;

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
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            if (j % i == 0 && i != j) {
                adj_list[i].push_back(j);
            }
        }
    }

    int src = 2;
    level[src] = 1;
    dfs(src);
    int dest_node = n-1;
    
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
        if(selected_node == 2) break;
        selected_node = parent[selected_node];
    }
    reverse(path.begin(), path.end());

    for(int node: path){
        cout<<node<<" ";
    }
    

    return 0;
}