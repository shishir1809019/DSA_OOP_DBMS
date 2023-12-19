#include<bits/stdc++.h>
using namespace std;

const int N = 300;
const int M = 5001;

// int dp[N][M];
int coins[N];


int main()
{
    int n, amount;
    cin>>n>>amount;
    for(int i = 0; i<n; i++){
        cin>>coins[i];
    }
    // memset(dp, 0, sizeof(dp));   
    vector<vector<int>> dp(n ,vector<int> (amount +1,1));

    for(int t = 0; t<=amount; t++){
        if(t%coins[0] == 0) dp[0][t] == 1;
        else dp[0][t] = 0;
    }

    for(int i = 1; i<n; i++){
        for(int t = 0; t<=amount; t++){
            int not_taken = dp[i-1][t];
            int taken = 0;
            if(coins[i] <= t){
                taken = dp[i][t-coins[i]];
            }

            dp[i][t] = not_taken + taken;
        }
    }

    cout<<dp[n-1][amount]<<endl;

    return 0;
}