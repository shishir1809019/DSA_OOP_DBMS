
#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    char s1[13] = "I hate that \0";
    char s2[13] = "I love that \0";

    char s3[11] = "I hate it\0";
    char s4[11] = "I love it\0";


    char s[100*13]="";


    for(int i = 1; i <= n; i++){
            int len = strlen(s);
            int len1 = strlen(s1);
            int len2 = strlen(s2);

            int len3 = strlen(s3);
            int len4 = strlen(s4);

            if(i == n){
                int length1;
                if(i%2==0) length1 = len4;
                else length1 = len3;
                for(int k = 0; k<= length1; k++){
                if(i%2!=0) s[len + k] = s3[k];
                if(i%2==0) s[len + k] = s4[k];
            }
            break;
            }



            int length;
            if(i%2==0) length = len2;
            else length = len1;

            for(int j = 0; j<= length; j++){
                if(i%2!=0) s[len + j] = s1[j];
                if(i%2==0) s[len + j] = s2[j];
            }

    }





//    if(n%2 != 0){
//        strcat(s,s3);
//    }
//    else{
//        strcat(s,s4);
//    }
    printf("%s",s);

    return 0;
}








