#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int steps = 0; steps<t; steps++){
        int n;
        scanf("%d", &n);

        int arr[n+1];
        for(int i= 0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int max = 1000;
        for(int i = 0; i<n-1; i++){
            if(arr[i+1] - arr[i] < max){
               max =  arr[i+1] - arr[i];
            }
        }
        printf("%d\n", max);


    }
}
