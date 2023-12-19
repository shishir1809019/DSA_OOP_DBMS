#include<bits/stdc++.h>
using namespace std;

typedef int ll;
ll max(ll a,ll b)
{
 if(a>b)
 return a;
 else return b;
}
ll bb[1002];
ll dp[1002][1002];
int main()
{
 ll t,n,k,f=1;
 scanf("%lld",&t);
 while(t--)
 {
 scanf("%d%d",&n,&k);
 for(ll i=2;i<=n+1;i++)
 scanf("%d",&bb[i]);
 for(ll i=2;i<=n+1;i++)
 {
 for(ll j=0;j<=k;j++)
 {
 if(j==0)
 dp[i][j]=0;
 else
 {
 if(bb[i]<=j)
 dp[i][j]=max(bb[i]+dp[i-2][j-bb[i]],dp[i-1][j]);
 else
 dp[i][j]=dp[i-1][j];
 }
 }
 }
 printf("Scenario #%d: %d\n",f++,dp[n+1][k]);

 for(int i = 1; i<=n+1 ;i++){
    for(int j = 0; j<=k; j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
 }
}
 return 0;
}