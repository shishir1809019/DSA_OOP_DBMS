#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    int dif = a - b;

    int energy = 1;

    while(dif >0){
     energy*=32;

     dif--;
    }

    printf("%d\n", energy);
}
