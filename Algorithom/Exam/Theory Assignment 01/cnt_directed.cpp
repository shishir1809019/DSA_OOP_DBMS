#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
// vector<int> graph[N];
// vector<int> graph(N);
// vector<vector<int>> graph

int count_directed_edge(vector<vector<int>> graph){
    int n = graph.size();
    int count = 0;
    for(int u = 0; u<n; u++){
        for(int v: graph[u]){
            bool found = false;
            for(int w: graph[v]){
                if(w == u){
                    found = true;
                    break;
                }
            }
            if(!found) count++;
        }
    }
    return count;
}
int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> graph(n);
    for(int i = 0; i<m; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
    }

    cout<<count_directed_edge(graph);

    return 0;
}

/*
6 6
0 1
1 2
2 3
1 5
2 4
5 4
*/ 