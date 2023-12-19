#include<stdio.h>
#include<string.h>

int main()
{
    char text[100], pattern[100];
    gets(text);
    gets(pattern);

    char *cur = text;
    while(cur){
        char *pos = strstr(cur, pattern);
        if(pos == NULL) break;
        printf("%s found at position %d\n", pattern, pos - text);
        cur = pos + 1;
    }
}
