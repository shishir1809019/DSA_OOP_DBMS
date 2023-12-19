#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);

   int century = 0;

    while(n >0){
        n-=100;

        century++;
    }
    printf("%d\n", century);

    return 0;
}


