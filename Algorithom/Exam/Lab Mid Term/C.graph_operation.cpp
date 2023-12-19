#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

vector<int> adj_list[N];

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    while(k--)
    {
        int c;
        cin>>c;
        if(c==1){
            int u,v;
            cin>>u>>v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        else{
            int x;
            cin>>x;
            for(int adj_node: adj_list[x]){
                cout<<adj_node<<" ";
            }
        }
    }
}