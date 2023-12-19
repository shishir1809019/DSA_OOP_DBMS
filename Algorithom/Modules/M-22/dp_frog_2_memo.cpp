#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+5;
int dp[N],h[N];
int n,k;
const int INF = 2e9;

/*
- state: stone_2(n) -> cost of reaching n-th stone_2 from 1st stone_2
- recurrence: stone_2(n) = min(
    stone_2(n-1) + abs(h[n] + h[n-1]),
    stone_2(n-2) + abs(h[n] + h[n-2])
- base case: stone_2(1) = 0
)
*/ 

int stone_2(int n){
    //1. base case
    if(n==1) return 0;

    //2.check answer is already exists
    if(dp[n] != -1) return dp[n];

    //3. calculate answer from subproblem
    int ans=INF;
    for(int i = 1; i<=k; i++){
        if(n-i<=0) continue;

        int candidate_ans = stone_2(n-i) + abs(h[n]-h[n-i]);
        ans = min(ans, candidate_ans);
    }

    dp[n] = ans;

    return ans; 
}

int main()
{
    cin>>n>>k;
    for(int i = 1; i<=n; i++){
        cin>>h[i];
    }
    for(int i =1; i<=n; i++){
        dp[i] = -1;
    }
    cout<<stone_2(n)<<endl;
    return 0;
}