#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
const int INF = 1e9;

vector<pair<int, int>> adj_list[N];
int d[N],visited[N];
int n,k;

int dijkstra(int src)
{
    
    for(int i = 1; i<=n; i++){
        d[i] = INF;
    }
    d[src] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, src});

    while(!pq.empty()){
        pair<int, int> head = pq.top();
        pq.pop();
        int selected_node = head.second; 

        if(visited[selected_node]) continue;
        visited[selected_node] = 1;

        for(auto adj_entry: adj_list[selected_node]){
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;

            if(d[selected_node] + edge_cst < d[adj_node]){
                d[adj_node] = d[selected_node] + edge_cst;
                pq.push({-d[adj_node], adj_node});
            }
        }
    }
    int mini = INT_MIN;
    for(int i = 1; i<=n; i++){
        if(i!=src && d[i] == INF) return -1;
        if(mini<d[i]) mini = d[i];
    }
    return mini;
}

int main()
{
    vector<vector<int>> times = {{2,1,1},{2,3,1},{3,4,1}};
    n = 4 , k = 2;

    for(int i=0;i<times.size();i++){
        int j = times[i][0];
        adj_list[j].push_back({times[i][1],times[i][2]}); 
    }

    int src = k;
    int x = dijkstra(src);

    if(visited[n] == 0){
        cout<<-1<<endl;
        return 0;
    }
    cout<<x<<endl;

    return 0;
}