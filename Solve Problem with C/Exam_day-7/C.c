#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);

    for(int i = 0; i< n; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            a[i] = a[i] + 32;
        }
    }
    int counter[26] = {0};
    for(int i = 0; i<strlen(a); i++){
        char value = a[i];
        counter[value - 'a'] = 1;
    }
    for(char value = 'a'; value <= 'z'; value++){
        if(counter[value - 'a'] == 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}
