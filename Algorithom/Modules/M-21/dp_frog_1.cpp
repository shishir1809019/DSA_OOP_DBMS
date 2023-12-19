#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+5;
int dp[N];
int h[N];

/*
- state: stone(n) -> cost of reaching n-th stone from 1st stone
- recurrence: stone(n) = min(
    stone(n-1) + abs(h[n] + h[n-1]),
    stone(n-2) + abs(h[n] + h[n-2])
- base case: stone(1) = 0
)
*/ 

int stone(int n){
    //1. base case
    if(n==1) return 0;

    //2.check answer is already exists
    if(dp[n] != -1) return dp[n];

    //3. calculate answer from subproblem
    int ans;
    //4. corner case
    if(n==2) ans = stone(n-1) + abs(h[n] - h[n-1]); 
    else ans = min(stone(n-1) + abs(h[n] - h[n-1]), stone(n-2) + abs(h[n] - h[n-2]));
    dp[n] = ans;

    return ans; 
}

int main()
{
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>h[i];
    }
    for(int i =1; i<=n; i++){
        dp[i] = -1;
    }
    cout<<stone(n)<<endl;
    return 0;
}