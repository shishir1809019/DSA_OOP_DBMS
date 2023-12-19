

#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

   float sum = 0;
   for(int i = 1; i<=n; i++){
    float A, B;
    scanf("%f%f", &A,&B);

    float multiply = A*B;
    sum += multiply;
   }
   printf("%.3f\n", sum);
    return 0;
}



