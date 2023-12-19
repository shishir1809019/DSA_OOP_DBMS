#include<bits/stdc++.h>
using namespace std;

int dp[1002][1002];
int solve(int curr, int prev, int n, vector<pair<int, int>> &players)
{
    if(curr == n) return 0;
    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];

    int notake = solve(curr+1, prev,n,players);
    if(prev==-1 || players[prev].second <= players[curr].second){
        int take = players[curr].second + solve(curr+1, curr, n, players);
        return dp[curr][prev+1] = max(take, notake);
    }
    return dp[curr][prev+1] = notake;
}

int main()
{
    vector<int> scores = {1,3,5,10,15};
    vector<int> ages = {1,2,3,4,5};

    memset(dp, -1, sizeof(dp));
    vector<pair<int, int>> players;
    int n = scores.size();
    for(int i = 0; i<n; i++){
        players.push_back({ages[i], scores[i]});
    }
    sort(players.begin(), players.end());

    cout<<solve(0,-1,n,players)<<endl;
    return 0;
}