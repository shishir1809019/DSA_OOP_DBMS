#include<bits/stdc++.h>
using namespace std;
const int N=1e5;

bool is_bidirectional(vector<vector<int>> graph){
    int n = graph.size();
    cout<<"this is n:"<<n<<endl;
    for(int u = 0; u<n; u++){
        for(int v: graph[u]){
            bool found = false;
            for(int w: graph[v]){
                if(w == u){
                    found = true;
                    break;
                }
            }
            if(!found) return false;
        }
    }
    return true;
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
    if (is_bidirectional(graph)) {
        cout << "bidirectional" << endl;
    } else {
        cout << "directional"<< endl;
    }

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