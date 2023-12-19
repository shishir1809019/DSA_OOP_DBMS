#include<stdio.h>

void add(int n, int a[], int b[], int sum[]){
    for(int i = 0; i < n; i++){
        sum[i] = a[i] + b[i];
    }

}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    int sum[3] = {0};

    int n = 3;
    add(n , a, b, sum);

    for(int i = 0; i<n; i++){
        printf("%d ", sum[i]);
    }

    return 0;
}

