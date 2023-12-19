#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

int n,m,x,u,v,root, vaxt=0;
vector<int> adj_list[N];
int visited[N],level[N],height[N];

void dfs(int src){
    visited[src] = 1;
    level[src] = vaxt++;
    for(int adj_node: adj_list[src]){
        if(!visited[adj_node]){
            dfs(adj_node);
        }
    }
    height[src] = vaxt++;
}

int is_parent(int a, int b){
    if(level[a]<level[b] && height[a]>height[b]) return 1;
    else return 0;
}




int main()
{
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>x;
        if(!x) root = i;
        else adj_list[x].push_back(i);
    }
    dfs(root);
    cin>>m;
    for(int i = 0; i<m; i++){
        cin>>u>>v;
        cout<<is_parent(u,v)<<endl;
    }


}