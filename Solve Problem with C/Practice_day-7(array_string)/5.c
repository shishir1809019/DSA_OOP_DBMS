
#include<stdio.h>

int main()
{


    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count[51] = {0};

    for(int i = 0; i < 50; i++){
        int x = arr[i];
        count[x]++;
    }
    for(int i = 0; i<=50; i++){
        if (count[i] == 0) continue;
        printf("%d -> %d \t",i,count[i]);
    }


    return 0;
}


