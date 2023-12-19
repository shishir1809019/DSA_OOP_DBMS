#include<stdio.h>

int main()
{
    int arr[7] = {10, 20, 50, 40, 50, 30, 40};

    int max = arr[0];
    int count=0;
    for(int i=1; i<7; i++){
        if(max <= arr[i]){
            max = arr[i];
        }

    }
    for(int j=0; j<7; j++){
        if(arr[j] == max){
            count++;
        }
    }

    printf("Maximum is %d\n", max);
    printf("Maximum occurs %d times", count);

    return 0;
}

