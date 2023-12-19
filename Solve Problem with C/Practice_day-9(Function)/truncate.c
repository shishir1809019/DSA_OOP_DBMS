    #include<stdio.h>
    #include<string.h>
    #include<stdbool.h>
    #include<ctype.h>


void truncate(char s[],int k){

    for(int i = 0; i < k; i++){
        printf("%c", s[i]);
    }

}
int main()
{
    char s[] = "abcd";

    int k;
    scanf("%d", &k);
    truncate(s, k);

    return 0;
}




