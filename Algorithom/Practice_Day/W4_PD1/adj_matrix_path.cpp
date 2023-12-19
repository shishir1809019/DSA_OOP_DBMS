#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;

int adj_matrix[N][N], visited[N], parent[N], level[N];
int numNodes;

void bfs(int src_node)
{
    visited[src_node] = 1;
    level[src_node] = 1;

    queue<int > q;
    q.push(src_node);
    while(!q.empty()){
        int head = q.front();
        q.pop();

        for(int i = 1; i<=numNodes; i++){
            if(adj_matrix[head][i] == 1 && visited[i] == 0){
                visited[i] = 1;
                parent[i] = head;
                level[i] = level[head] + 1;
                q.push(i);
            }
        }
    }
}


int main()
{
    cin>>numNodes;

    for (int i = 1; i <= numNodes; i++) {
        for (int j = 1; j <= numNodes; j++) {
            cin >> adj_matrix[i][j];
        }
    }
    int start_node = 1;
    int dest = numNodes;

    bfs(start_node);

    if(visited[dest] == 0){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    cout<<level[dest]<<endl;

    vector<int> path;
    int selected_node = dest;

    while (true)
    {
        path.push_back(selected_node);
        if(selected_node == 1) break;
        selected_node = parent[selected_node];
    }
    
    reverse(path.begin(), path.end());

    for(int node: path){
        cout<<node<<" ";
    }

}