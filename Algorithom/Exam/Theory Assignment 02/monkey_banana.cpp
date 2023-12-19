#include<bits/stdc++.h>
using namespace std;
int matrix[1100][1100];
int dp[1100][1100];

int main()
{
    int t;
    cin>>t;
   
        for(int ncase = 1; ncase<=t; ncase++){
            int n;
            cin>>n;
            for(int i = 0; i<n; i++){
                for(int j = 0; j<=i; j++){
                    cin>>matrix[i][j];
                }
            }
        
            for(int i = n; i<2*n-1; i++){
                for(int j = 0; j<=(2*n-2-i); j++){
                    cin>>matrix[i][j];
                }
            }
            memset(dp, 0, sizeof(dp));
            dp[2*n-2][0] = matrix[2*n-2][0];

            for(int i = 2*n-3; i>=(n-1); i--){
                for(int j = 0; j<=(2*n-2-i); j++){
                    if(j==0){
                        dp[i][j] = dp[i+1][j]+matrix[i][j];
                    }
                    else if(j==(2*n-2-i))
                    {
                        dp[i][j] = dp[i+1][j-1]+matrix[i][j];
                    }
                    else{
                        dp[i][j] = max(dp[i+1][j]+matrix[i][j], dp[i+1][j-1]+matrix[i][j]);
                    }
                }
            }
            for(int i = n-2; i>=0; i--){
                for(int j = 0; j<=i; j++){
                    dp[i][j] = max(dp[i+1][j+1] + matrix[i][j], dp[i+1][j]+matrix[i][j]);
                }
            }
            for(int i = 0; i<=n; i++){
                for(int j = 0; j<=n; j++){
                    cout<<dp[i][j]<<" ";
                }
                cout<<endl;
            }
        }
}