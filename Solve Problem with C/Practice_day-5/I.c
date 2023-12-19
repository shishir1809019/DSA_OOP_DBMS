


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        int grade;
        scanf("%d",&grade);

        int div = grade / 5 + 1;
        int multiple = 5 * div;

        if(multiple >= 40){
            if(multiple - grade < 3){
                printf("%d\n", multiple);
            }
            else{
                printf("%d\n", grade);
            }
        }
        else{
            printf("%d\n", grade);
        }

    }

    return 0;
}

