#include <stdio.h>

int main()
{
    int n, day, month, year;
    printf("No of days:");
    scanf("%d", &n);

    year = n/365;
    month = (n%365)/30;
    day = (n%365)%30;

    printf("%d Years\n%d MOnths\n%d Days",year, month, day);

    return 0;
}
