#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> parent_list[N];

int dp[N];
int root, target_node;

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i = 0; i<m; i++){
        int u, v;
        cin>>u>>v;
        parent_list[v].push_back(u);
    }
    for(int i = 1; i<=n; i++){
        dp[i] = -1;
    }
   
  
}