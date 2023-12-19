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
    matrix[3][1] = 1;
    
    for(int i = 0; i<nodes; i++){
        for(int j = 0; j<nodes; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    // adjacency list
    vector<int>adj_list[nodes];

    // O(E*2) = O(E) -> O(n^2)
    adj_list[0] = {1};
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {1, 2};
    
    // for weighted
    vector<pair<int, int>> adj_list1[nodes];

    // you can also do this by list initialization
    adj_list1[0].push_back({1,2});
    adj_list1[1].push_back({2,4});
    adj_list1[3].push_back({2,8});
    adj_list1[3].push_back({1,7});

    // O(E*2) = O(E) -> O(n^2)
    for(int i = 0; i<nodes; i++){
        cout<<i<<"->";
        for(int j = 0; j<adj_list1[i].size(); j++){
            cout<<"("<<adj_list1[i][j].first<< ","<< adj_list1[i][j].second<<")," <<" ";
        }
        cout<<endl;
    }

    // Edge list
    vector<vector<int>> edge_list;

    edge_list.push_back({0,1});
    edge_list.push_back({1,2});
    edge_list.push_back({1,3});
    edge_list.push_back({2,3});

    for(int i = 0; i<edge_list.size(); i++){
        cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<endl;
    }

    return 0;

}