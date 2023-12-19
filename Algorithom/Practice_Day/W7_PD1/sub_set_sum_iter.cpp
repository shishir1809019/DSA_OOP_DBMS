#include<bits/stdc++.h>
using namespace std;
const int N = 101;
const int M = 1e5;
int n, nums[N];

int dp[N][M];



int main()
{
    
    cin>>n; 
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    if (sum % 2 != 0){
        cout<<0<<endl;
        return 0;
    }
    sum = sum/2;
    dp[0][0]= 1;
    for(int i = 1; i<=n; i++){
        for(int target = 0; target<=sum; target++){
            if(target-nums[i] >= 0){
                dp[i][target] = dp[i-1][target-nums[i-1]];
            }
            dp[i][target] = dp[i][target] or dp[i-1][target];
        }
    }
    cout<<dp[n][sum]<<endl;

}