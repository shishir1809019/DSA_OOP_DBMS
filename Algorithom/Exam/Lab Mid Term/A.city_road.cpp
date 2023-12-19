#include<bits/stdc++.h>
using namespace std;
const int N = 101;

int adj_matrix[N][N];
int visited[N],n;
int cnt = 0;

// void dfs(int node)
// {
//     visited[node] = 1;
    

//     for(int i = 1; i<=n; i++){
//         if(adj_matrix[node][i]==1 && visited[i] == 0){
//             cnt++;
//             dfs(i);
//         }
//     }
// }

int main()
{
    
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            int a;
            cin>>a;
            adj_matrix[i][j] = a;
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(adj_matrix[i][j]==1) cnt++; 
        }
    }

    // dfs(1);
    cout<<cnt/2<<endl;
    return 0;
}

