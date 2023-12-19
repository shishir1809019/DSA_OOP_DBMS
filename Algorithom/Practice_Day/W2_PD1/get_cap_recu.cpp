#include<bits/stdc++.h>
using namespace std;

char getCapital(string str){
    if(str.empty()) return '\0';
    else if(isupper(str[0])) return str[0];
    
    return getCapital(str.substr(1));
}

int main()
{   
    string str = "thisStRIng";
    char ch = getCapital(str);
    cout<<ch<<endl;
}