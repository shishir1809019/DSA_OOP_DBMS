
#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);

   float total_juice = 0;

   for(int i = 1; i<=n; i++){
    int p;
    scanf("%d",&p);


   total_juice += p;
   }

   printf("%f",  (float) total_juice/n);

    return 0;
}



