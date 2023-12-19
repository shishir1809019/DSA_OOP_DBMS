#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char outcome_of_game[n];
    scanf("%s", outcome_of_game);


    int A = 0;
    int D = 0;

    for(int i = 0; outcome_of_game[i] != '\0'; i++){
        if(outcome_of_game[i] == 'A'){
            A++;
        }
        else if(outcome_of_game[i] == 'D'){
            D++;
        }
    }

    if(A > D){
        printf("Anton\n");
    }
    else if(A < D){
        printf("Danik\n");
    }
    else if(A == D){
        printf("Friendship\n");
    }


    return 0;
}




