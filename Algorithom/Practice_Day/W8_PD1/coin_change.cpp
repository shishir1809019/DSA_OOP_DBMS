#include<bits/stdc++.h>
using namespace std;

const int N = 60;
const int M = 1001;
const int MOD = 100000007;

int dp[N][M];
int coin[N], limit[N];

int fun(int n, int amount){
    if(n == 0){
        if( amount % coin[0] == 0) return amount/coin[0];
        else return 1e9;
    }
    if(dp[n][amount] != -1) return dp[n][amount];

    int not_taken = fun(n-1, amount);

    int taken = 1e9;
    if(coin[n]<=amount){
        taken = 1+fun(n, amount-coin[n]);
    }
    return dp[n][amount] = min(taken, not_taken);
}

int main()
{
    int n, amount;
    cin>>n>>amount;

    for(int i = 0; i<n; i++){
        cin>>coin[i];
    }

    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=amount; j++){
            dp[i][j] = -1;
        }
    }

    int ans = fun(n-1, amount);
     
    if(ans >= 1e9) cout<<-1<<endl;
    else cout<<ans<<endl;



}