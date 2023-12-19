#include<stdio.h>

int * makeReverse(int n, const int a[]){
    int revIndex = 0;
    int arrIndex = n - 1;
    //int *reverse[n];
    int *reverse = (int*) malloc(n*sizeof(int));
    while(arrIndex >= 0)
    {
        reverse[revIndex] = a[arrIndex];

        revIndex++;
        arrIndex--;
    }
    return reverse;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int* rev ;
    rev = makeReverse(n, arr);

    for(int i = 0; i<n; i++){
        printf("%d ", *(rev+i));
    }

    return 0;

}
