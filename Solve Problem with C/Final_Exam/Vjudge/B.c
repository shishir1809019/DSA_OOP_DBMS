#include<stdio.h>
#include<string.h>

int main()
{
    char str[51];
    scanf("%s", str);

    int len = strlen(str);
    int a = 0;
    for(int i = 0; i<len ; i++){
        if(str[i] == 'a'){
            a++;
        }
    }
    int other = len -a;
    if(a > other){
        printf("%d\n", len);
    }
    else{
        printf("%d\n", a+(a-1));
    }
}
