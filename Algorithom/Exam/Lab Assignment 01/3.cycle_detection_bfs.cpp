#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;

int nodes, edges;
vector<int> adj_list[N];
int visited[N], in_degree[N];


int cnt = 0;
bool bfs(int src){
    queue<int>q;
    for(int i = 1; i<=edges; i++){
        if(in_degree[i] == 0){
            q.push(i);
        }
    }

    int cnt = 0;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cnt++;
        for(int adj_node: adj_list[head]){
            in_degree[adj_node]--;
            if(in_degree[adj_node] == 0){
                q.push(adj_node);
            }
        }
    }
    if(cnt != nodes) return true;
    else return false;
}


int main()
{
    
    cin>>nodes>>edges;

    for(int i =1; i<=edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        in_degree[v]++;
    }
    if(bfs(1)){
        cout<<"Cycle Exits"<<endl;
    }
    else{
        cout<<"Not Exits"<<endl;
    }
}