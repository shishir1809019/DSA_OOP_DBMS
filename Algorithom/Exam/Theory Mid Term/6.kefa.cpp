#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n,k,a=0, visited[N];

vector<int> cat;
vector<int> adj_list[N];

void dfs(int src, int m){
    visited[src] = 1;
    if(m>k) return;

    int flag = 1;
    for(auto adj_node: adj_list[src]){
        if(visited[adj_node]==0){
            dfs(adj_node,m*cat[adj_node]+cat[adj_node]);
            flag = 0;
        }
    }
    if(flag==1) a++;
}
int main()
{
    cin>>n>>k;
    cat.resize(n);
    for(int i = 0; i<n; i++){
        cin>>cat[i];
    }

    for(int i = 0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        u--,v--;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    dfs(0,cat[0]);

    cout<<a<<endl;

    return 0;
}