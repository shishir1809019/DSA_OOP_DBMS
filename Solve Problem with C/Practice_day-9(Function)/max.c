#include<stdio.h>

int findMax(int a, char b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 0; i<n; i++){
        max = findMax(max, arr[i]);
    }
    printf("%d\n", max);

    return 0;
}


