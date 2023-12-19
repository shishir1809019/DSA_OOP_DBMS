#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];
vector<int> adj_list[N];
vector<pair<int, int>> checked[100];

void bfs(int src){
    queue<int>q;

    visited[src] = 1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout<<head<<endl;

        for(int adj_node: adj_list[head]){
            if(visited[adj_node] == 1 && adj_node != src){
                checked[adj_node].push_back({adj_node, 1});
            }
            if(visited[adj_node] == 0){
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i = 0; i<edges; i++){
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 0;
    bfs(src);

    for(int i = 0; i<nodes; i++){
        cout<<i<<"->"<<checked[i].size()+1<<endl;
        // for(int j = 0; j<checked[i].size(); j++){
        //     cout<<"("<<checked[i][j].first<< ","<< checked[i][j].second<<")," <<" ";
        // }
        // cout<<endl;
    }

    return 0;
}