
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int X = 0;

    for(int i = 1 ; i <= n; i++){
        char a, b, c;
        scanf(" %c%c%c", &a, &b, &c);

        if(b == '+')        X++;
        else if(b == '-')   X--;
    }

    printf("%d \n", X);

    return 0;
}
