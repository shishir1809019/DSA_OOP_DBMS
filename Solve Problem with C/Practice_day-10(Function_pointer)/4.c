#include<stdio.h>

void sort(int *a, int *b){
    if(*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    printf("%d %d", *a,*b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a ,&b);

    sort(&a, &b);


    return 0;
}
