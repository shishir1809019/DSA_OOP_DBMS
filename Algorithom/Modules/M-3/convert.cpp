#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nodes = 4;
    int matrix[nodes][nodes] = {};

    // adjacency_matrix
    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;
    matrix[3][1] = 1;

    vector<int>adj_list[nodes];

    for(int i = 0; i<nodes; i++){
        for(int j = 0; j<nodes; j++){
            if(matrix[i][j] !=0){
                adj_list[i].push_back(j);
            }
        }
    }

    for(int i = 0; i<nodes; i++){
        cout<<i<<"-->";
        for(int j = 0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

    int adj_matrix[nodes][nodes] = {};

    for(int i = 0; i<nodes; i++){
        for(int j = 0; j<adj_list[i].size(); j++){
            int k = adj_list[i][j];
            adj_matrix[i][k] = 1;
        }
    }
    cout<<endl;
    for(int i = 0; i<nodes; i++){
        for(int j = 0; j<nodes; j++){
            cout<<adj_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}