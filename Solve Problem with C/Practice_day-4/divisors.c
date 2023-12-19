
#include <stdio.h>

int main()
{
    int x,y, multiple;
    scanf("%d%d",&x,&y);

    for(int i = 1; i<=10; i++){
        multiple = x*i;
        if(y % multiple == 0){
            printf("%d ", multiple);
        }
    }

    for(int i = 1; i<=10; i++){
        multiple = x*i;
        if( y % multiple != 0){
            printf("No such integers");
        }
       break;
    }

    return 0;
}

