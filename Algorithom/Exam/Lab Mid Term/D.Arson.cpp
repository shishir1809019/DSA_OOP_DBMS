#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int n,m;

vector<int> adj_list[N];
vector<int> d;
queue<int> q;

void bfs()
{
    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(int adj_node: adj_list[head]){
            if(d[adj_node] == -1){
                d[adj_node] = d[head] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    d.resize(n+1);
    fill(d.begin(), d.end(), -1);

    for(int i = 1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int k;
    cin>>k;
    while(k--){
        int start_point;
        cin>>start_point;
        q.push(start_point);
        d[start_point] = 0;
    }

    bfs();

    int last_node = 1;
    for(int i = 1; i<=n; i++){
        if(d[i]>d[last_node]){
            last_node = i;
        }
    }
    cout<<d[last_node]<<endl;
    cout<<last_node<<endl;

}