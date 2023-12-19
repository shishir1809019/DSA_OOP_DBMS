#include<stdio.h>

int change_array(int n, int arr1[], int arr2[]){
    for(int i = 0; i<n/2; i++){
        int temp = arr1[i];
        arr1[i] = arr1[n-i-1];
        arr1[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    int arr2[n];
    change_array(n, arr1, arr2);

     for(int i = 0; i< n; i++){
        printf("%d ", arr2[i]);
    }

}
