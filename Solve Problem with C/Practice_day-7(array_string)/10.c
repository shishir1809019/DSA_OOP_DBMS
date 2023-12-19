#include<stdio.h>

int main()
{
    char str[100];
    gets(str);


    int length = sizeof(str)/sizeof(str[0]);
    int count = 0;
    for(int i = 0; i<length; i++){
        if(str[i] == 'o'){
            count++;
        }
    }
    printf("%d", count);
}
