#include <iostream>
#include <vector>
using namespace std;
int dp[100][10000];
 
int findTotalWays(vector<int> arr, int i, int k)
{
 
    if (k == 0 && i == arr.size())
        return 1;
    if (i >= arr.size())
        return 0;
    if(dp[i][k]!=-1) return dp[i][k];

    int ans1 =  findTotalWays(arr, i + 1, k - arr[i]);
    if(k<arr[i]){
        dp[i][k] = ans1;
        return ans1;
    }
    int ans2 = findTotalWays(arr, i + 1, k + arr[i]);
    int ans = ans1 + ans2;
    dp[i][k] = ans;
    return ans;
}
 
// Driver Program
int main()
{
    vector<int> arr = { 1, 1, 1, 1,1  };
 
    // target number
    int k = 3;

    for(int i = 0; i<=arr.size()+1; i++){
        for(int j = 0; j<=k+1; j++){
            dp[i][j] = -1;
        }
    }
 
    cout << findTotalWays(arr, 0, k) << endl;
 
    return 0;
}