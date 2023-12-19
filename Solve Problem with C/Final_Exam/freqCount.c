#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int counter[101] = {0};
    for(int i = 0; i<n; i++){
        int value = arr[i];
        counter[value]++;
    }
    for(int i = 1; i<=n; i++){
        if(counter[i] == 0) continue;
        printf("%d --> %d \n",arr[i-1], counter[i]);
    }
    return 0;
}

