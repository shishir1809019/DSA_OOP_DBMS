#include<bits/stdc++.h>
using namespace std;
vector<int> combination;


void printCombinations(int n) {
    if (n == 0) {
        cout<<"{";
        for (int i = 0; i < combination.size(); i++) {
            cout << combination[i];
            if(i<combination.size()-1) cout<<", ";
        }
        cout<<"}";
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (combination.empty() || i <= combination.back()) {
            combination.push_back(i);
            printCombinations(n - i);
            combination.pop_back(); 
        }
    }
}

int main() {
    int n;
    cin >> n;
    printCombinations(n);
    return 0;
}
