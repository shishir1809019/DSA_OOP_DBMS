#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    int countLower = 0;
    int countUpper = 0;

    for(int i = 0; i < strlen(str); i++){
        char ch = str[i];
        if(islower(ch)) countLower++;
        else countUpper++;
    }
    if(countLower >= countUpper){
        for(int i = 0; i < strlen(str); i++){
            printf("%c", tolower(str[i]));
        }
    }
    else{
     for(int i = 0; i< strlen(str); i++){
        printf("%c", toupper(str[i]));
     }
    }



    return 0;
}
