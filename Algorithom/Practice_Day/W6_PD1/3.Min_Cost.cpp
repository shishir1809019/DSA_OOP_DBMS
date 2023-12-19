#include<bits/stdc++.h>
using namespace std;
int const N = 50;
int dp[N],n;

int minCost(vector<int> &cost, int idx, vector<int> &dp){
    if(idx == cost.size() - 1 || idx == cost.size() - 2){
        return cost[idx];
    }
    if(dp[idx] != 0){
        return dp[idx];
    }

    int x = minCost(cost, idx+1, dp);
    int y = minCost(cost, idx+2, dp);

    dp[idx] = min(x,y) + cost[idx];

    return dp[idx];
}



int main()
{   
    vector<int>cost = {1,100,1,1,1,100,1,1,100,1};
    if(cost.size()==2){
        return min(cost[0], cost[1]);
    }
    vector<int> dp(1001);
    int x = minCost(cost, 0, dp);
    int y = minCost(cost, 1, dp);

    // cout<<min(x,y)<<endl;

    dp[0] = cost[0];
    dp[1] = cost[1];
    int n = cost.size();
    for(int i = 2; i<n; i++){
        dp[i] = cost[i]+min(dp[i-1],dp[i-2]);
    }

    int result = min(dp[n-1], dp[n-2]);
    cout<<result<<endl;
    return 0;
}