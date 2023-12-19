
#include<stdio.h>


int main() {
    char str1[] = "Hello,World!";
	char str2[16];
	gets(str2);

   int value=strcmp(str1,str2);

   if(value==0) printf("AC\n");

   else printf("WA\n");


    return 0;

	}




