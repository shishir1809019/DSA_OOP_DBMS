
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num_of_days = 0;

    for(int i =1;i<=n; i++){
        int t;
        scanf("%d",&t);

        if(t<0){
            num_of_days++;
        }
    }
    printf("%d", num_of_days);
    return 0;
}



