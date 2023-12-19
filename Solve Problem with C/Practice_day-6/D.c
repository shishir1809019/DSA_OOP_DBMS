


#include<stdio.h>

int main()
{
    int v, a, b, c;
    scanf("%d%d%d%d",&v,&a,&b,&c);

    while(v>=0){
        v-=a;
        if(v < 0){
            printf("F\n");
            break;
        }
        v-=b;
        if(v < 0){
            printf("M\n");
            break;
        }
        v-=c;
        if(v < 0){
            printf("T\n");
            break;
        }
    }
    return 0;
}

