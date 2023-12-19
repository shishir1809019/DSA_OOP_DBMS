
#include<stdio.h>

int main()
{

    int n,  remainder;

    scanf("%d", &n);
    int sum = 0;

  while (n != 0) {
    remainder = n % 10;
    sum+=remainder;
    n /= 10;
  }
  printf("%d\n",111*sum);


    return 0;
}










