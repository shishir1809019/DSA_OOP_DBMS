#include<bits/stdc++.h>
using namespace std;
const int N = 1e2+1;

int nodes, edges;
vector<int> adj_list[N];

int main()
{

    for (int i = 2; i <= N; i++) {
        for (int j = 2; j <= N; j++) {
            if (j % i == 0 && i != j) {
                adj_list[i].push_back(j);
            }
        }
    }

    for (int i = 2; i <= N + 1; i++) {
        cout << "Node " << i << " is connected to: ";
        for (int j = 0; j < adj_list[i].size(); j++) {
            cout << adj_list[i][j] << " ";
        }
        if(i>=N/2) break; 
        cout << endl;
    }

    return 0;
}