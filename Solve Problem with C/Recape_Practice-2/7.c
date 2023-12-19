#include<stdio.h>
#include<string.h>

int* makeCopy(int n, int input[]){
    int *a = (int*) malloc(n*sizeof(int));

    for(int i = 0; i<n; i++){
        a[i]= input[i]*input[i];
    }

    return a;
}

int main()
{
    int n;
    scanf("%d", &n);

    int input[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &input[i]);
    }

    int *mcy;
    mcy = makeCopy(n, input);

    for(int i = 0; i<n; i++){
        printf("%d ", *mcy++);
    }

    return 0;
}
