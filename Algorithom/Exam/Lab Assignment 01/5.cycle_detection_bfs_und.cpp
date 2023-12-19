#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;
int visited[N], parent[N], level[N];
vector<int> adj_list[N];
int cycle_len = 0;



bool cycle_detect_bfs(int src){
    queue<int> q;

    visited[src] = 1;
    q.push(src);
    int parent_node = -1;
    
    int count = 0;
    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(int adj_node: adj_list[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                parent_node = head;
                // parent[adj_node] = head;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
            else if(parent_node != adj_node){
                
                cycle_len = level[head] + level[adj_node] + 1;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i = 1; i<=edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    if(cycle_detect_bfs(1)){
        cout<<"Cycle exists. "<<"length: "<<cycle_len+1<<endl;
    }
    else{
        cout<<"Cycle Not Exits"<<endl;
    }
}