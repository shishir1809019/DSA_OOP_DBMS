#include<stdio.h>

int main()
{
    const int a = 20;

    printf("%d ", a);

    int*pa = &a;
    *pa = 40;
    printf("%d", a);


    return 0;
}

