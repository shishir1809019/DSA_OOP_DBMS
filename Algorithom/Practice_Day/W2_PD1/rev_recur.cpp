#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
    if (str.length() == 0) return str;
    else{
        char ch = str[0];
        string remove_first = reverse(str.substr(1));
        cout<<remove_first<<" "<<ch<<endl;
        return remove_first+ch;
    }
}

int main()
{
    cout<<reverse("Hello")<<endl;
}