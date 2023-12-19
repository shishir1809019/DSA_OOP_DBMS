#include<bits/stdc++.h>
using namespace std;

int main() {

    // n = number of nodes
    // m = number of edges
    int n, m;
    cin >> n >> m;

    // TODO: Declare your favorite data structures here.
    vector<vector<int>> edge_list;


    for(int i = 0 ; i < m ; i++) { // loop over the number of edges
        int u, v;
        cin >> u >> v; // there exists an edge between node u and v

        // TODO: Do stuffs with u and v
        edge_list.push_back({u,v});
    }

    // TODO: Print your representation like shown in module - 2
    cout<<endl;
    for(int i = 0; i<edge_list.size(); i++){
        cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<endl;
    }

    // edge -> matrix

    int adj_matrix[n][n] = {};
    for(int i = 0; i<m; i++){
        adj_matrix[edge_list[i][0]][edge_list[i][1]] = 1;
        adj_matrix[edge_list[i][1]][edge_list[i][0]] = 1;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<adj_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // edge -> list
    vector<int> adj_list[n];

    for(int i = 0; i<m; i++){
        int first_element = edge_list[i][0];
        for(int j = 0; j<m; j++){
            if(first_element == edge_list[j][0]){
                adj_list[first_element].push_back(edge_list[j][1]);
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<i<<"-->";
        for(int j = 0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
