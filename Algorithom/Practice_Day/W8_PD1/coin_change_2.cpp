#include<bits/stdc++.h>
using namespace std;

const int N = 60;
const int M = 1001;
const int MOD = 100000007;

int dp[N][M];
int coin[N], limit[N];

int fun(int n, int amount){
    if(n<0||amount<0)
        return 0;
    if(amount==0)
        return 1;
    if(dp[n][amount] != -1) return dp[n][amount];

    int not_taken = fun(n-1, amount);

    // int taken = 0;
    // if(coin[n]<=amount){
        int taken = fun(n, amount-coin[n]);
    // }
    return dp[n][amount] = taken + not_taken;
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
     
    if(ans <= 0) cout<<0<<endl;
    else cout<<ans<<endl;



}