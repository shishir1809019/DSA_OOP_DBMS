#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }



    int count=0;

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i< n; i++){
        if(arr[i] > max){
            max = arr[i];
            count++;
        }
        else if(arr[i] < min){
            min = arr[i];
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
