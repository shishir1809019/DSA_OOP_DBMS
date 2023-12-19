
#include<stdio.h>

int main()
{
    int A, B, C, D, E, F, X;
    scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&X);

    int extra_time1 = 0;
     if(X-(A+C) > 0){
        extra_time1 = X -(A+C);
    }
    int distance1 = (A + extra_time1)*B;

    int extra_time2 = 0;
     if(X-(D+F) > 0){
        extra_time2 = X -(D+F);
    }
    int distance2 = (A + extra_time1)*E;

     if(distance1 > distance2){
        printf("Takahashi\n");
    }
    else if( distance1 < distance2){
        printf("Aoki\n");
    }
    else if( distance1 == distance2){
        printf("Draw\n");
    }






    return 0;
}





