#include<bits/stdc++.h>
using namespace std;
const int N = 101;

int adj_matrix[N][N],n;

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

    bool undirected = true;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if((adj_matrix[i][j]==1 != adj_matrix[j][i]) || adj_matrix[j][j]==1){
                undirected = false;
                break;
            }
        }
    }
    if(undirected) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

