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
    level[src] = 0;    

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(int adj_node: adj_list[head]){
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                parent[adj_node] = head;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
            else if(parent[head] != adj_node){   
                parent[adj_node] = head;
                level[adj_node] = level[head]+1;
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

    int src = 1;
    bool cycle = cycle_detect_bfs(src);
    int dest_node = nodes;

    if(!cycle){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

    vector<int> path;
    int selected_node = dest_node;

    while(true){
        path.push_back(selected_node);
        if(selected_node == src) break;
        selected_node = parent[selected_node];
    }
    reverse(path.begin(), path.end());
    cout<<path.size()+1<<endl;
    for(int node: path){
        cout<<node<<" ";
    } 
    cout<<path[0]<<endl;
}