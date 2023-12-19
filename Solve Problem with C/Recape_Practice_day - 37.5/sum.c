#include<stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i<2; i++){
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    printf("Sum -> %d", sum);

    return 0;
}
