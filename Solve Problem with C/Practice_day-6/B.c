

#include<stdio.h>
#include<math.h>
int main()
{
   long long int n;
   scanf("%lld", &n);

   if(n >= - pow(2,31) && n <= (pow(2,31)-1)){
    printf("Yes");
   }
   else{
    printf("No");
   }

    return 0;
}
