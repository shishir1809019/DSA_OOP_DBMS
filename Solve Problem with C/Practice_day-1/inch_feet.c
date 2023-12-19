#include<stdio.h>

int main()
{
    int  height, feet,inch;
    printf("Enter height is inches:");
    scanf("%d",&height);

    feet = height/12;
    inch = height - feet*12;

    printf("Your height is %d feet %d inches", feet, inch);

    return 0;
}
