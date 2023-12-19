#include<stdio.h>

int main()
{
    int s,t,x;
    scanf("%d%d%d",&s,&t,&x);

    float time = x + 0.5;

    if(s>t){
        if((time >= s && time <= 23.99 || (time >=0 && time <= t))){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    else{
        if(time >= s && time<=t ){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }



    return 0;
}



