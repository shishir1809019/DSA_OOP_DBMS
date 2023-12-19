#include<stdio.h>
#include<string.h>

int main()
{
    char text[100], pattern;
    gets(text);
    scanf(" %c", &pattern);

    char *cur = text;

    while(cur){
        char *pos = strchr(cur, pattern);
        if(pos == NULL) break;
        printf("Found at %d\n", pos - text);
        cur = pos + 1;
    }

    return 0;
}
