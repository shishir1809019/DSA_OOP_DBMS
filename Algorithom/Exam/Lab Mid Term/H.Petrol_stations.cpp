#include<bits/stdc++.h>
using namespace std;
const int N = 105;
const int INF = 1e9;

int cost[N], d[N][N];

int main()
{
    int n,m;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>cost[i];
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            d[i][j] = INF;
        }
    }
    cin>>m;
    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        d[u][v] = cost[u];
        d[v][u] = cost[v];
    }
    for(int i = 1; i<=n; i++){
        d[i][i] = 0;
    }
    for(int k = 1; k<=n; k++){
        for(int u = 1; u<=n; u++){
            for(int v = 1; v<=n; v++){
                d[u][v] = min(d[u][v], d[u][k]+d[k][v]);
            }
        }
    }
    if(d[1][n] == INF) cout<<-1<<endl;
    else cout<<d[1][n]<<endl;

}