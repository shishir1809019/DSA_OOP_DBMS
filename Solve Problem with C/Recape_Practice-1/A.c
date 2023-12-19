
#include<stdio.h>
#include <ctype.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s", str);



    for(int i = 0; i < strlen(str); i++){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u' || ch == 'y') continue;
        else printf(".%c", ch);
    }
    printf("\n");

    return 0;
}
