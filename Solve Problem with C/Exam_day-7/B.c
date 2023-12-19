#include<stdio.h>

int main()
{
    char str[1000];
    gets(str);

    int counter[26] = {0};
     for(int i = 0; i<strlen(str); i++){
        char value = str[i];
        if(value == '{' || value == '}' || value == ',') continue;
        else counter[value - 'a'] = 1;
    }
    int count = 0;
    for(int i = 0; i< 26; i++){
        if(counter[i] == 1) count++;
    }

    printf("%d\n",count);

    return 0;
}
