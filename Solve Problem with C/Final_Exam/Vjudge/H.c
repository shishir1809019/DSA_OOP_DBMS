#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    for(int i = 0; i<strlen(str); i++){
        if(i%2 == 0){
            for(int j = i+2; j<strlen(str); j=j+2){
                if(str[i]>str[j]){
                    int temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
        else continue;
    }

    printf("%s", str);
}
