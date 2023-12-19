

#include<stdio.h>
#include<math.h>
int main()
{
   int n,p;
   scanf("%d%d",&n,&p);

   int failed = 0;

   for(int i = 1; i<=n; i++){
    int a;
    scanf("%d", &a);

    if(a<p) failed++;
    else failed = failed;
   }

   printf("%d\n", failed);

    return 0;
}

