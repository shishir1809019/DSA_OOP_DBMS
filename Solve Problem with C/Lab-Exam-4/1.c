#include<stdio.h>
#include<math.h>

int square(int number){
    return number*number;
}

int main()
{
    int number;
    scanf("%d", &number);

    int num = square(number);

    printf("%d", num);

    return 0;
}
