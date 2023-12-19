#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr1[i], &arr2[i]);
    }
     for(int i = 0; i<n; i++){
        scanf("%d", &arr2[i]);
    }

    int c = 0;
    for(int i = 0; i< n; i++){
        if(arr1[i] ==  n || arr2[i] == n){
            c=1;
            printf("I become the guy.\n");
            break;
        }
    }
    if(c == 0){
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
