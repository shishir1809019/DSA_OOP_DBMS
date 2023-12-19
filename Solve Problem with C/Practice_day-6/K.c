

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int easy = 0;

    for(int i = 1; i<=n; i++){
        int person_opinion;
        scanf("%d",&person_opinion);

        if(person_opinion > 0) easy++;
    }

    if(easy == 0){
        printf("EASY\n");
    }
    else{
        printf("HARD\n");
    }

    return 0;
}




