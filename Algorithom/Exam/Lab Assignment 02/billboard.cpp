#include<bits/stdc++.h>
using namespace std;

int dp[22][10005];   

int solve(vector<int> rods, int var, int index){

    if(index == rods.size()){
        if(var == 0) return 0;
        return INT_MIN;
    }

    if(dp[index][var+5000] != -1) return dp[index][var+5000];

    int ans1 = rods[index] + solve(rods, var+rods[index], index+1);
    int ans2 = solve(rods, var-rods[index], index+1);
    int ans3 = solve(rods, var, index+1);

    return dp[index][var+5000] = max({ans1, ans2, ans3}); //O(n*max)

}
int main()
{
    vector<int> rods = {1,2,3,6};
    memset(dp, -1, sizeof(dp));
    cout<<solve(rods, 0, 0)<<endl;  //O()


    return 0;
}