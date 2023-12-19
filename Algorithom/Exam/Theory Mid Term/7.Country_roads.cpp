#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
const long long INF = 1e18;
int n, m, visited[N];
long long d[N];


vector<pair<int,long long>> adj_list[N];

void dijkstra(int src)
{
    for(int i = 0; i<n; i++){
        d[i] = INF;
    }
    d[src] = 0;
    priority_queue<pair<long long, int>> pq;
    pq.push({0,src});

    while(!pq.empty())
    {
        pair<long long, int> head = pq.top();
        pq.pop();
        long long curD = -head.first;
        int selected_node = head.second;

        if(d[selected_node] < curD) continue;

        for(auto adj_entry: adj_list[selected_node])
        {
            int adj_node = adj_entry.first;
            long long edge_cst = adj_entry.second;

            long long mx = max(curD, edge_cst);
            if(mx<d[adj_node]){
                d[adj_node] = mx;
                pq.push({-d[adj_node], adj_node});
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int tc = 1; tc<=t; tc++)
    {
        cin>>n>>m;
        for(int i = 0; i<n; i++) adj_list[i].clear();
        for(int i = 1; i<=m;i++){
            int u,v;
            long long w;
            cin>>u>>v>>w;
            adj_list[u].push_back({v,w});
            adj_list[v].push_back({u,w});
        }
        int src;
        cin>>src;
        dijkstra(src);

        cout<<"Case "<<tc<<":"<<endl;
        for(int i = 0; i<n; i++){
            if(d[i] == INF){
                cout<<"Impossible"<<endl;
            }
            else{
                cout<<d[i]<<endl;
            }
        }
    }

    return 0;
}