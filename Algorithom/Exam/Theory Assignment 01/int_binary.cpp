#include<bits/stdc++.h>
using namespace std;

string int_to_binary_recur(int decimal){
    if(decimal <= 1) return to_string(decimal);

    string binary = int_to_binary_recur(decimal/2);
    return binary += to_string(decimal%2);
}

int main()
{
    cout<<int_to_binary_recur(10);
    return 0;
}
