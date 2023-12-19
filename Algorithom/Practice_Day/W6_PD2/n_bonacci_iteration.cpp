#include<bits/stdc++.h>
using namespace std;
int const N = 101;
int dp[N];



int main()
{
    int n, k;
    cin>>n>>k;
    
    for(int i = 1; i<=n; i++){
        dp[i] = 1;
    }

    for(int i = n+1; i<=k; i++){
        for(int j = 1; j<=n; j++){
            dp[i] += dp[i-j];
        }
    }

    cout<< dp[k] <<endl;
    return 0;
}