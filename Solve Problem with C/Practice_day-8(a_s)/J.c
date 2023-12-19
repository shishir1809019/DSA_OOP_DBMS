#include<stdio.h>
#include<string.h>

int main()
{
        char str1[201], str[101], str2[101];
        scanf("%s%s%s", str1, str, str2);

        strcat(str1, str);

        char temp1;
        int i, j;
        int n1 = strlen(str1);
        for (i = 0; i < n1-1; i++) {
            for (j = i+1; j < n1; j++) {
                if (str1[i] > str1[j]) {
                        temp1 = str1[i];
                        str1[i] = str1[j];
                        str1[j] = temp1;
                }
            }
        }

        char temp2;
        int k, l;
        int n2 = strlen(str2);
        for (k = 0; k < n2-1; k++) {
            for (l = k+1; l < n2; l++) {
                if (str2[k] > str2[l]) {
                        temp2 = str2[k];
                        str2[k] = str2[l];
                        str2[l] = temp2;
                }
            }
        }

        int value=strcmp(str1,str2);

        if(value == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    return 0;
}
