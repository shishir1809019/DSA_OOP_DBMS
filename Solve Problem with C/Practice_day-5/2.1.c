
#include <stdio.h>

int main()
{
//    int i ;
//    int sum = 0;
//    while(i<=100){
//        sum+=i;
//        i++;
//    }

    int i = 50;
    int j=1;

    int sum = 0;

    while(j<=30){
        sum+=i;

        j++;
        i--;
    }

    printf("%d", sum);
    return 0;
}
