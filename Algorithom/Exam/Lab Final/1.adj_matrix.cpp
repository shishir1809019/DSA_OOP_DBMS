#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<pair<int, int>> adj_list[N];


int main()
{
    int n, m;
    cin>>n>>m;

    for(int i = 1 ; i <= m ; i++) {
        int u, v, w;
        cin >> u >> v >>w;

        adj_list[u].push_back({v,w});
        adj_list[v].push_back({u,w});
    }

    int adj_matrix[n][n] = {};

    for(int i = 0; i<n; i++){
        for(int j = 0; j<adj_list[i].size(); j++){
            pair<int, int> x = adj_list[i][j];
            adj_matrix[i][x.first] = x.second;
        }
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<adj_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}