#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int array[n];

    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    int array2[n];
    for(int i = 0; i<n; i++){
        array2[n-1-i] = array[i];
    }

    for(int i =0; i<n; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");

    //another way

    for(int i=0, j=n-1; i<j; i++, j--){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    for(int i =0;i<n; i++){

        printf("%d ", array[i]);
    }

    return 0;
}
