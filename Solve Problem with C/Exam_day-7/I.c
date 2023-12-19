#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i =0; i<n; i++){
        char str[101];
        scanf("%s", str);

        int len = strlen(str);

        if(len % 2 == 0){
            int c = 0;
            for(int i = 0, j = len/2; i<len/2, j<len;i++,j++){
                if(str[i] == str[j]){
                    c = 1;
                }
                else{
                    c = 0;
                    break;
                };
            }
            if(c) printf("YES\n");
            else printf("NO\n");
        }
        else{
            printf("NO\n");
        }
    }
}
