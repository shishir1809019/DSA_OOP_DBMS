#include<stdio.h>
#include<string.h>

int main()
{
    char text[100], pattern[100];
    scanf("%s %s", text, pattern);

    char *pos = strstr(text, pattern);

    if(!pos){
        printf("Not Found");
    }
    else{
        printf("Found at %d",pos - text);
    }

    return 0;
}
