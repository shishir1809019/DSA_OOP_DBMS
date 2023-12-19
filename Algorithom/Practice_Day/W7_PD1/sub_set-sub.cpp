#include<bits/stdc++.h>
using namespace std;
const int N = 101;
int n, nums[N];

int dp[N][N];

int subset_sum(int n, int sum){
    cout<<n<<" "<<sum<<endl;
    if(n==0){
        if(sum==0) return true;
        return false;
    }
    if(dp[n][sum]!=0){
        return dp[n][sum];
    }

    if (nums[n - 1] > sum){
        int ans = subset_sum( n - 1, sum);
        dp[n][sum] = ans;
        return ans;
    }
        
    int ans = subset_sum(n - 1, sum) || subset_sum(n - 1, sum - nums[n - 1]);
    dp[n][sum] = ans;
    return ans;
}

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

    cout<<subset_sum(n, sum/2)<<endl;

}