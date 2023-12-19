#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Input 5 integers:");
    for(int i = 1; i <= n; i++){
        int number;

        scanf(" %d",&number);

        if(number % 2 == 0){
            sum += number;
        }
    }

    printf("Sum of even integers = %d\n",sum);

    return 0;
}

