#include<stdio.h>


//Has return + Has parameter
int odd_even(int a){
    if(a%2){
        return 1;
    }
    else return 0;
}
//No return + Has parameter
void odd_even(int a){
    if(a%2){
        printf("Even");
    }
    else printf("Odd");
}
//Has return + No parameter
int even(){
    return 1;
}
int odd(){
    return 0;
}
//No return + No parameter
void odd(){
    printf("Odd");
}
void even(){
    printf("Even");
}

int main()
{

    int a = 20;


    return 0;
}
