#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;

vector<int> adj_list[N];
int visited[N];
vector<pair<int,int>>edge;
vector<pair<int,int>>remove_edge;

int parent_node = -1;
int cycle_size =0;
int cycle = 0;
bool detect_cycle(int node){
    visited[node] = 1;
    
    for(int adj_node: adj_list[node]){
        if(adj_node == parent_node) continue;
        else if(visited[adj_node] == 0){
            parent_node = node;
            bool got_cycle = detect_cycle(adj_node);
            if(got_cycle){
                cycle++;
                
                return true;
            }
        }
        else if(visited[adj_node] == 1){
            cycle++;
            cout<<"a"<<node<<adj_node<<endl;
            return true;
        }
    }
    visited[node] = 2;
    return false;
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
    bool cycle_exits = false;

    for(int i = 1; i<=nodes; i++){
        if(visited[i] == 0){
            bool got_cycle = detect_cycle(i);
            if(got_cycle){
                cycle_exits = true;
                break;
            }
        }
    }
    if(cycle_exits){
        cout<<"Cycle Exits"<<"Cycle length: "<<cycle+1<<endl;
    }
    else{
        cout<<"Not Exits"<<endl;
    }
}
