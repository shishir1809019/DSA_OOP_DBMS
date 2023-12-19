

#include<stdio.h>
#include<math.h>

int main()
{
   float x;
   scanf("%f",&x);

   float y = x - (int)x;


   if(y >=.5){
    printf("%.0f\n", ceil(x));
   }
   else{
    printf("%.0f\n",floor(x));
   }

    return 0;
}



