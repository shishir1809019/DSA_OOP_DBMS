#include<stdio.h>
#include<math.h>

void character(int a, double b){
    char charValue1 = a ;
    char charValue2 = b;
    printf("The character value is :%c %c",charValue1, charValue2);
}

int main()
{

    int number1;
    double number2 ;

    scanf("%d %lf", &number1, &number2);

    character(number1, number2);

    return 0;
}
