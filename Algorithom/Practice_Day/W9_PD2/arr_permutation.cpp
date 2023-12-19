#include<bits/stdc++.h>
using namespace std;

int arr[] = {23, 45, 74};
int n = sizeof(arr)/sizeof(arr[0]); 

void permute(int arr[], int l, int r)
{
    if (l == r){
        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
        
    else {
        for (int i = l; i <= r; i++) {
            // Swapping done
            swap(arr[l], arr[i]);
            // Recursion called
            permute(arr, l + 1, r);
            // backtrack
            swap(arr[l], arr[i]);
        }
    }
}

int main()
{
    permute(arr, 0, n - 1);
    return 0;
}