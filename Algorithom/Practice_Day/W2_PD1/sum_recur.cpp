#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
    if (n == 0) return 0;
    else{
        int last_num = n%10;
        int rest_num = n/10;
        int x = digitSum(rest_num);
        return x + last_num;
    }
}

int main()
{
    cout<<digitSum(7464)<<endl;
    return 0;
}