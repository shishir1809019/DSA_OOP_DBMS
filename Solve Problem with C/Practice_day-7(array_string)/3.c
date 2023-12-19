#include<stdio.h>
#include <limits.h>

int main()
{
    int arr[10] = {-7, 2, 3, 8, 6, 6, 75, 38, 3, 2};
    int max1, max2;


    max1 = max2 = INT_MIN;

    for(int i=1; i<10; i++){
        if(max1 < arr[i]){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }

    }

    printf("%d", max2);


}

