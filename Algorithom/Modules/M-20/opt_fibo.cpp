#include<bits/stdc++.h>
using namespace std;

long long arr[101];

long long fib(int n){
    if(n<=2) return 1;
    if(arr[n]!=0) return arr[n];

    arr[n]= fib(n-1)+fib(n-2);
    return arr[n];
}

int main()
{
    cout<<fib(50)<<endl;
    return 0;
}
