#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> scores = {4,5,6,5};
    vector<int> ages = {2,1,2,1};

    vector<pair<int, int>> players;
    
    for(int i = 0; i<scores.size(); i++){
        players.push_back({ages[i], scores[i]});
    }
    sort(players.begin(), players.end());

    int n = players.size();
    vector<int> dp(n);

    int ans = 0;
    for(int i  = 0; i<n; i++){
        dp[i] = players[i].second;
        ans = max(ans, dp[i]);
    }

    for(int i = 0; i<n; i++){
        for(int j = i-1; j>=0; j--){
            if(players[i].second >= players[j].second){
                dp[i] = max(dp[i], players[i].second + dp[j]);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout<<ans<<endl;
    return 0;
}