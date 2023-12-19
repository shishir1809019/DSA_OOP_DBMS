#include<stdio.h>
#include<string.h>

int count_zero(char str[]){
    int count = 0;
    for(int i = 0; i<strlen(str); i++){
        if(str[i] == '0'){
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    scanf("%s",str);

    int count = count_zero(str);
    printf("%d", count);

    return 0;
}
