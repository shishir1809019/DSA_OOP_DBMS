#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
int n;
int dp[N];
int brute(int id) {
    if(id >= n) {
        return 0;
    }
    if(dp[id] != -1) return dp[id];
    return dp[id] =  max({
        1 + brute(id + 1), 
        2 + brute(id + 3),
        3 + brute(id + 5)
    });
}

int main()
{
    cin>>n;
    for(int i = 0; i<n; i++){
        dp[i] = -1;
    }
    cout<<brute(0)<<endl;
    return 0;
}