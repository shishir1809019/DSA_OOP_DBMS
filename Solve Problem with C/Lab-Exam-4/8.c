#include<stdio.h>
#include<string.h>

void stringCat(char a[], char b[], char out[]){
    strcat(out,a);
    strcat(out,b);
}

int main()
{
    char a[100];
    char b[100];
    scanf("%s%s", a, b);

    char out[201]= {0};

    stringCat(a, b, out);
    printf("%s", out);

    return 0;
}
