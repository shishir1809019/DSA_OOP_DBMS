#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
const int INF = 1e5;

vector<pair<int, int>> adj_list[N];
int d[N],parent[N];

int main()
{
    int n;
    cin>>n;
    
    for(int i = 1; i<=n; i++){
        d[i] = INF;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            int w;
            cin>>w;
            if(w == 0|| w == INF) continue;
            adj_list[i].push_back({j,w});
        }
    }   
    int negative_cycle = false;
    int last_updated_node = -1;

    for(int i = 1; i<=n; i++){
        for(int node = 1; node<=n; node++){
            for(pair<int,int> adj_node: adj_list[node]){
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(d[u] + w < d[v]){
                    parent[v] = u;
                    d[v] = d[u]+w;
                    if(i==n){
                        negative_cycle = true;
                        last_updated_node = v;
                    }
                }
            }
        }
    }
    if(negative_cycle){
        cout<<"YES"<<endl;
        int selected_node = last_updated_node;
        for(int i = 1; i<=n-1; i++){
            selected_node = parent[selected_node];
        }

        int first_node = selected_node;
        vector<int> cycle;
        cycle.push_back(selected_node);

        while(true)
        {
            selected_node=parent[selected_node];
            cycle.push_back(selected_node);
            if(selected_node == first_node) break;
        }
        reverse(cycle.begin(), cycle.end());
        cout<<cycle.size()<<endl;
        for(int node: cycle){
            cout<<node<<" ";
        }
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}