#include<stdio.h>

int main()
{
    float* A = (float *) malloc(100 * sizeof(float*));

    printf("%d", sizeof(A));
}
