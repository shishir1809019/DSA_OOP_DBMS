#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;
int visited[N], in_degree[N];

vector<int > adj_list[N];
stack<int> node_stack;
int nodes, edges;

void reverseStack() {
    stack<int> rev;
    while (!node_stack.empty()) {
        int temp = node_stack.top();
        node_stack.pop();
        rev.push(temp);
    }
    node_stack = rev;
}

bool detect_cycle(int node){
    visited[node] = 1;
    
    for(int adj_node: adj_list[node]){
        if(visited[adj_node] == 0){
            bool got_cycle = detect_cycle(adj_node);
            if(got_cycle){
                return true;
            }
        }
        else if(visited[adj_node] == 1){
            return true;
        }
    }
    visited[node] = 2;
    return false;
}

void bfs(){
    queue<int> q;

    for(int i = 1; i<=nodes; i++){
        if(in_degree[i] == 0){
            q.push(i);
        }
    }

    
    while(!q.empty()){
        int head = q.front();
        q.pop();
        node_stack.push(head);

        for(int adj_node: adj_list[head]){
            in_degree[adj_node]--;
            if(in_degree[adj_node] == 0){
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    cin>>nodes>>edges;

    for(int i = 1; i<=edges; i++){
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        in_degree[v]++;
    }   

    bfs();

    bool cycle_exits = false;

    for(int i = 1; i<=nodes; i++){
        if(visited[i] == 0){
            bool got_cycle = detect_cycle(i);
            if(got_cycle){
                cycle_exits = true;
                break;
            }
        }
    }

    reverseStack();
    if(node_stack.empty() || cycle_exits){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    while(!node_stack.empty()){
        cout<<node_stack.top()<<" ";
        node_stack.pop();
    }
    return 0;
}
