#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

vector<pair<int, pair<int, int>>> adj_list[N];
int visited[N];

int n,d,v,r;
int timeNeeded = -1;

void dfs(int node, int start){
    visited[node] = 1;
    
    if(node == v){
        if(timeNeeded == -1){
            timeNeeded = start;
        }
        else timeNeeded = min(timeNeeded, start);
    }
    for(auto adj_entry: adj_list[node]){
        int adj_node = adj_entry.first;
        int start_time = adj_entry.second.first;
        int end_time = adj_entry.second.second;
        
        if(visited[adj_node] == 1 || start>start_time) continue;
        if(timeNeeded != -1 && end_time>timeNeeded) continue;
        dfs(adj_node, end_time);
    }

    visited[node] = 2;
}

int main(){
    int n;
    cin>>n>>d>>v>>r;
    
    d--,v--;
    for(int i = 0; i<r; i++){
        int from, startTime, to, endTime;
        cin>>from>>startTime>>to>>endTime;

        from--, to--;
        adj_list[from].push_back({to,{startTime, endTime}});
    }

    dfs(d,0);

    cout<<timeNeeded<<endl;
}