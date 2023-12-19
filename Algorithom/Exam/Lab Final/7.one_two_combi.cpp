#include<bits/stdc++.h>
using namespace std;

int countNumbers(int n) {
    if (n == 1)
        return 2;
    
    int a = 1;
    int b = 1;

    for (int i = 2; i <= n; i++) {
        int temp = a;
        a = a + b;  
        b = temp;
    }

    return a + b+1;
}

int main() {
    int n;
    cin >> n;

    int result = countNumbers(n);
    cout  << result << endl;

    return 0;
}
