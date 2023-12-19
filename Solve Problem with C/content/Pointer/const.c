#include<stdio.h>

int main()
{
    const int N = 20;

    int *  pN = &N;

    *pN = 1000;

    int m;
    //pN = &m;

    printf("%p --> %d",  pN, *pN);
}
