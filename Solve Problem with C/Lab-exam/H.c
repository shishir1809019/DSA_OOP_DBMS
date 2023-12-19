
#include <stdio.h>

int main()
{

    int A,B;
    scanf("%d%d",&A,&B);

    int sum = A + B;

    if(sum <= 9){
        printf("%d\n", sum);
    }
    else{
        printf("error\n");
    }
    return 0;
}


