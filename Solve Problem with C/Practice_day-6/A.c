
#include<stdio.h>

int main()
{
   int a, b;
   scanf("%d%d", &a, &b);

   if(b*2 < a){
    printf("%d\n", a - b*2);
   }
   else if(b*2 >= a){
    printf("0\n");
   }

    return 0;
}
