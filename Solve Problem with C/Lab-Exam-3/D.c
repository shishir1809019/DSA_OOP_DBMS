
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>


int main() {
    int str[1001];
    scanf("%s", str);

    if(islower(str[0])){
        str[0] = str[0] - 32;
    }

    printf("%s\n", str);

    return 0;

	}

