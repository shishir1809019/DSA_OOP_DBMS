#include <stdio.h>

int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);

    int water_left = A - B;

    if(water_left >= C){
        printf("0\n");
    }
    else{
        printf("%d\n",C-water_left);
    }

    return 0;
}
