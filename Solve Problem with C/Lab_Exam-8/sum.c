#include<stdio.h>

int make_sum(float a, float b){
    return a+b;
}

int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float sum = make_sum(a, b);

    printf("%.2f", sum);

    return 0;
}
