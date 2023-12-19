#include<bits/stdc++.h>
using namespace std;

const int N = 60;
const int M = 10001;
int coins[N];
int dp[N][M];


int main()
{
    int n, amount;
    cin>>n>>amount;

    for(int i = 0; i<n; i++){
        cin>>coins[i];
    }

    for(int i=0;i<=amount;i++){
        if(i % coins[0] == 0) dp[0][i] = i/coins[0];
        else dp[0][i] = 1e9;
    }
    for(int i=1; i<=n; i++){
        for(int j = 0; j<=amount; j++){
            int not_taken = dp[i-1][j];
            int taken = 1e9;
            if(coins[i]<j) taken = 1 + dp[i][j-coins[i]];
            dp[i][j] = min(taken, not_taken);
        }
    }
    
    int ans = dp[n-1][amount];
    if(ans >= 1e9) cout<<-1<<endl;
    else cout<<ans<<endl;



}