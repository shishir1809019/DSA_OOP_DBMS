#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int police = 0;
    int crime = 0;

    for(int i = 1; i<= n; i++){
        int event;
        scanf("%d",&event);

        if(event > 0){
            police+=event;
//            if(police > 0 && crime > 0){
//                crime-= police;
//            }

        }
        else if(event < 0){
            crime ++;
            if(police > 0 && crime >0){
                crime-=police;
            }
        }
    }

    printf("%d", crime);

    return 0;
}
