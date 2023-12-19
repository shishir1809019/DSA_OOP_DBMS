#include<bits/stdc++.h>
using namespace std;

const int MAX_ADS = 100;
const int MAX_SCREEN_FRACTIONS = 101;

vector<pair<double, int>> ads(MAX_ADS);
unordered_map<string, int> dp;

int maxProfit(int i, int j) {
    if (i == 0 || j == 0) {
        return 0;
    }
    string key = to_string(i) + "-" + to_string(j);
    if (dp.find(key) != dp.end()) {
        return dp[key];
    }
    int profit = maxProfit(i - 1, j);
    if (j >= round(ads[i].first * 100)) {
        profit = max(profit, maxProfit(i - 1, j - round(ads[i].first * 100)) + ads[i].second);
    }
    dp[key] = profit;
    return profit;
}

int main() {
    int numAds;
    cin >> numAds;
    for (int i = 1; i <= numAds; i++) {
        cin >> ads[i].first >> ads[i].second;
    }
    int totalScreenFractions;
    cin >> totalScreenFractions;
    int maxP = maxProfit(numAds, totalScreenFractions);
    cout << maxP << endl;
    return 0;
}
