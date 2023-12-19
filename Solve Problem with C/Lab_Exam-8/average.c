#include<stdio.h>

int make_average(int n, int arr[]){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum/n;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int avg = make_average(n, arr);

    printf("%d", avg);

    return 0;
}
