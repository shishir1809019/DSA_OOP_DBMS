

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


int main() {

    int t;
    scanf("%d", &t);

    for(int i = 0; i< t; i++){
        char str[101];
        scanf("%s", str);
        int len = strlen(str);

        for(int j = 0; j<len; j++){
            if(j!=0 && j%2==0 && j!=len) continue;
            else printf("%c", str[j]);
        }

        printf("\n");
    }

    return 0;

	}







