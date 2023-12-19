#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a,&b);

    int sum = a+b;
    int sub = a-b;
    int mul = a*b;

    if( sum>sub && sum>mul){
        printf("%d\n", sum);
    }
    else if(sub> sum && sub > mul){
        printf("%d\n", sub);
    }
    else{
        printf("%d\n",mul);
    }
    return 0;
}
