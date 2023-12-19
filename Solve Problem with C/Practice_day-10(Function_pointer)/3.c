#include<stdio.h>
#include<math.h>

void reverse(int* n){
    int rem, rev;
     while(*n != 0){
        rem = *n%10;
        rev = rev*10+rem;
        *n/=10;
     }

     printf("%d", rev);
}

int main()
{
    int n;
    scanf("%d", &n);

    reverse(&n);

    return 0;
}
