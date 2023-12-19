#include<stdio.h>

int main()
{
    int n=5;
    int arr[5] = {10, 20, 30, 40, 50};

    int pos = 3;
    int num = 25;

    n++;
    for(int i= n-1; i>=pos; i--){
            arr[i] = arr[i-1];
    }
    arr[pos-1] = num;

    for(int i=0; i<n; i++){
            printf("%d\t", arr[i]);
        }



}


