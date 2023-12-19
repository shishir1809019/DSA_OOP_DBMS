#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+5;
int dp[N],h[N];

const int INF = 2e9;
//

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i = 1; i<=n; i++){
        cin>>h[i];
    }
    
    dp[1] = 0;
    for(int i = 1; i<=n; i++){
        dp[i] = INF;
        for(int j = 1; j<=k; j++){
            int from_stone = i-j;
            if(from_stone <= 0){
                break;
            }
            int candidate_ans = dp[from_stone] + abs(h[i] - h[from_stone]);
            dp[i] = min(dp[i], candidate_ans);
        }
    }
    cout<<dp[n]<<endl;


    return 0;
}