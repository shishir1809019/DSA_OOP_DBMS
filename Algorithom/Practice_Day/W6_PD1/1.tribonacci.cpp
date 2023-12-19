#include<bits/stdc++.h>
using namespace std;
int const N = 101;
int dp[N];

int fib(int n){
    if(n<=3) return 1;
    if(dp[n]!=0) return dp[n];

    dp[n]= fib(n-1)+fib(n-2)+fib(n-3);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    // cout<<fib(n)<<endl;

    // tabulation
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] ;
    }

    cout<< dp[n] <<endl;
    
    return 0;
}