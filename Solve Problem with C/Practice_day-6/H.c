
#include<stdio.h>

int main()
{
   int n, h;
   scanf("%d%d",&n, &h);\

   int total_width = 0;

   for(int i= 1; i<=n; i++){
    int person_height;
    scanf("%d", &person_height);

    if(person_height <= h) total_width++;
    else if(person_height > h) total_width += 2;

   }

   printf("%d\n", total_width);

    return 0;
}


