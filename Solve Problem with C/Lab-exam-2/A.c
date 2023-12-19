#include<stdio.h>

int main()
{
    int n, k, a;
    scanf("%d%d%d",&n,&k,&a);

    int i=a-1;

    while(k>0){


        i++;

        k--;
        if(i > n) i = 1;

    }
    printf("%d\n",i);


    return 0;
}

