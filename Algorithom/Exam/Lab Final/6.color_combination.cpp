#include<bits/stdc++.h>
using namespace std;

int countColorCombinations(int n) {
    int dp[n + 1][3];    
    dp[1][0] = dp[1][1] = dp[1][2] = 1;
    
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1] + dp[i - 1][2];
        dp[i][1] = dp[i - 1][0] + dp[i - 1][2];
        dp[i][2] = dp[i - 1][0] + dp[i - 1][1];
    }
    
    int total = dp[n][0] + dp[n][1] + dp[n][2];

    return total;
}

int main() {
    int n;
    cin >> n;
    
    int numCombinations = countColorCombinations(n);
    cout <<numCombinations <<endl;
    
    return 0;
}
