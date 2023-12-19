#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int n, nums[N];

int dp[200][N];


int main()
{
    int target;
    cin>>n>>target;


    for(int i = 1; i<=n; i++){
        cin>>nums[i];
    }

    cout<<target_sum(n, target)<<endl;

}