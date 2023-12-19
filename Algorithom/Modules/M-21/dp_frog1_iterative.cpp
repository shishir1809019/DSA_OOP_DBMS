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



int main()
{
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>h[i];
    }
    //handle base case
    dp[1] = 0;

    //loop through the states
    for(int i = 2; i<=n; i++){
        int ans1 = dp[i-1] + abs(h[i] - h[i-1]);
        //corner case
        if(i == 2){
            dp[i] = ans1;
            continue;
        }
        int ans2 = dp[i-2] + abs(h[i] - h[i-2]);
        dp[i] = min(ans1, ans2);
    }

    cout<<dp[n]<<endl;
    return 0;
}