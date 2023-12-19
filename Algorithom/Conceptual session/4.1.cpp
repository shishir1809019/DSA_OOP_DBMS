#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> edgeList;
vector<int> parent;

int find_parent(int x){
    if(parent[x] == -1) return x;
    return find_parent(parent[x]);
}


int main()
{
    int n, e;
    cin>>n>>e;
    parent.resize(n, -1);

    while(e--){
        int a, b;
        cin>>a>>b;
        edgeList.push_back({a,b});
    }
    bool cyclic = false;
    for(int i =0; i<edgeList.size(); i++){
        pair<int, int> pr = edgeList[i];
        int a, b;
        a = pr.first;
        b = pr.second;
        int parentA = find_parent(a);
        int parentB = find_parent(b);

        if(parentA == parentB){
            cyclic = true;
            break;
        }
        else{
            parent[parentA] = parentB;
        }
    }
    if(cyclic) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}