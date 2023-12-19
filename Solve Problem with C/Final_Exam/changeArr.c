#include<stdio.h>

void change_values(int arr[], int n, int l, int r){
    for(int i = l ; i<=r; i++){
        arr[i] = 0;
    }

    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100001]={10,20,30,40,50};

    change_values(arr, 5, 1, 3);

    return 0;
}
