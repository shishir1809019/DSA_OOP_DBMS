#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int number = 1;
    for(int i = 0; i<n; i++){
        if(number <= k){
            number*=2;
        }
        else{
            number += k;
        }

    }
     printf("%d\n", number);

     return 0;

}
