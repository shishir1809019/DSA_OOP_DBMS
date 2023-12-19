#include<bits/stdc++.h>
using namespace std;
int const N = 101;
int dp[N];
int n,k;


int fib(int k){
    if(k<=n) return 1;
    if(dp[k]!=0) return dp[k];

    for(int i = 1; i<=n; i++){
        dp[k] += fib(k-i);
    }
    return dp[k];
}

int main()
{
    cin>>n>>k;
    cout<<fib(k)<<endl;
    
    
    return 0;
}