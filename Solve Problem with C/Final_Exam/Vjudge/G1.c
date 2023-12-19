#include<stdio.h>
int main()
{
    int l, r;
    scanf("%d %d", &l,&r);
    char str[100001];
    scanf("%s", &str);

    for( int i = l-1; i < r; i++)
    {
        r--;
        char temp  = str[i];
        str[i] = str[r];
        str[r] = temp;
    }
    printf("%s\n",str);

    return 0;
}
