#include<stdio.h>

int main()
{
    int A, B, C, D, E, F, X;
    scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&X); ///4 3 3 6 2 5 10

    int X1=X;
    int X2=X;

    int extra_time1 = 0;
    int extra_time2 = 0;

    while(X1 > (A+C) ){
            if(X1-(A+C) < A) extra_time1 += X1-(A+C);
            else extra_time1 += A;

        X1-=(A+C);

//    if(X1 > (A+C)){
//        extra_time1 += X1 -(A+C);
//        X1-=(A+C);
//   }
//    if(X2 > (D+F)){
//        extra_time2 += X2 -(D+F);
//        X2-=(D+F);
//   }


   }



    while(X2 > (D+F)){
        if(X2-(D+F) < D) extra_time2 += X2-(D+F);
        else extra_time2 += D;

    X2-=(D+F);
  }
    int distance1 = (A + extra_time1)*B;
    int distance2 = (D + extra_time2)*E;

    if(distance1 > distance2){
        printf("Takahashi\n");
   }
    else if( distance1 < distance2){
        printf("Aoki\n");
    }
    else {
        printf("Draw\n");
    }


    return 0;
}


