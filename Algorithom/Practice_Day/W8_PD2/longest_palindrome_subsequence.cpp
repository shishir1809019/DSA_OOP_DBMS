#include<bits/stdc++.h>
using namespace std;
const int N = 3003;
string s;
int n, m;

vector<vector<int>> dp;

int LCS(string &s, string &rev, int i, int j){
    if(i==s.length() || j==rev.length()) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    if(s[i] == rev[j]){
        return dp[i][j] = 1 + LCS(s,rev,i+1, j+1);
    }
    return dp[i][j] = max(LCS(s,rev,i+1, j), LCS(s,rev,i, j+1));
}

int main()
{
    cin>>s;
    n = s.length();
    string rev = s;
    reverse(s.begin(), s.end());
    int size = s.size();
    dp.resize(size + 1, vector<int>(size + 1, -1));

    return LCS(s, rev, 0,0);
}