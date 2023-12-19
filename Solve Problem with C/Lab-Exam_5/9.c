#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], ch;
    gets(str);
    scanf("%c", &ch);

    for(int i = 0; i<strlen(str); i++){
        if(str[i] == ch){
            printf("%ch found at position %d\n",ch, i+1);
        }
    }

    return 0;
}
