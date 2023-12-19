#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    scanf("%s", str);

    int len = strlen(str);

    int counter[10] = {0};
    for(int i = 0; i<len; i++){
        char value = str[i];
        int x = value - '0';
        if(x == 0 || x == 1 || x ==2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 7 || x == 8 || x == 9){
            counter[x] = 1;
        }
    }
    int count = 0;
    for(int i = 0; i<10; i++){
        if(counter[i] == 1) count++;
    }
    if(count == 10){
        printf("YES");
    }
    else printf("NO");
    return 0;
}
