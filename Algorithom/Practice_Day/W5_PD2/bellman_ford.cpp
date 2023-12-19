#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
const int INF = 1e9;

vector<vector<int>> edge_list;
int d[N];

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i = 1; i<=n; i++){
        d[i] = INF;
    }
    for(int i = 0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>w;
        edge_list.push_back({u,v,w});
    }
    int src = 1;
    d[src] = 0;
    int negative_cycle = false;

    for(int i = 1; i<=n; i++){
        // for(int node = 1; node<=n; node++){
            for(int k=0; k<edge_list.size(); k++){
                int u = edge_list[k][0];
                int v = edge_list[k][1];
                int w = edge_list[k][2];

                if(d[u] + w < d[v]){
                    d[v] = d[u]+w;
                    if(i==n) {
                        negative_cycle = true;
                    }
                }
            // }
        }
    }
    if(negative_cycle){
        cout<<"Graph has negative cycle."<<endl;
    }
    else{
        for(int i = 1; i<=n; i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}