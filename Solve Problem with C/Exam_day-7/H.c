#include<stdio.h>
#include<string.h>

int main()
{
    char ch[201];
    scanf("%s", ch);
    int len = strlen(ch);
    int i = 0;
    while(i < len){
        if(ch[i] == '-' && ch[i+1] == '.'){
            printf("1");
            i += 2;
        }
        else if(ch[i] == '-' && ch[i+1] == '-'){
            printf("2");
            i += 2;
        }
        else if(ch[i] == '.'){
            printf("0");
            i++;
        }
    }

    printf("\n");

    return 0;
}
