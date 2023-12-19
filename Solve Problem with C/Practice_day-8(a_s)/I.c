
#include<stdio.h>


int main() {
	int t;
	scanf("%d", &t);

	for(int i = 0; i<t; i++){
        char str1[100];
        scanf("%s", str1);

        char str2[100];

        for(int j = 0; j< strlen(str1); j++){
            if(str1[j] != '\0') str2[j] = str1[j%2];
        }

        printf("%s\n", str2);
	}

    return 0;

	}





