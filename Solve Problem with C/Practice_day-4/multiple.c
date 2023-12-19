#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);

    if(number % 3 == 0 && number % 7 == 0){
        printf("no");
    }
    else if(number % 3 == 0){
        printf("yes");
    }
    else if(number % 7 == 0){
        printf("yes");
    }
    else{
        printf("Number is not multiple of 3 or 7");
    }

    return 0;
}
