#include <stdio.h>

int main()
{
    int n;
    printf("Enter 0/1: ");

    do{

    scanf("%d",&n);
    if(n!=0 && n!=1){
        printf("Wrong Input. Try Again.");
    }
    } while(n!=0 && n!=1);

    printf("You entered %d", n);
}
