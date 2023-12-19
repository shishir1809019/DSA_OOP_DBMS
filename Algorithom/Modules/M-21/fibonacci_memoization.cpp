#include<bits/stdc++.h>
using namespace std;
int const N = 101;
int dp[N];

long long fib(int n){
    if(n<=2) return 1;
    if(dp[n]!=0) return dp[n];

    dp[n]= fib(n-1)+fib(n-2);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    
    
    return 0;
}