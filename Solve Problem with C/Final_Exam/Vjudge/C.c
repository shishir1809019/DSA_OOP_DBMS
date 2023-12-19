#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int steps = 0; steps<t; steps++){
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i =0; i<n;i++){
            scanf("%d", &arr[i]);
        }
        int k = 0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                printf("%d ", arr[k]);
                continue;
            }
            else{
                printf("%d ", arr[n-1-k]);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
