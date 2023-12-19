#include<stdio.h>

int main()
{
    int l, r;
    scanf("%d%d", &l,&r);

    char str[100001];
    scanf("%s", str);

    for (int i = l-1,j = 0; i <= (r+1)/2; i++, j++)
    {
        int temp = str[i];
        str[i] = str[r - j - 1];
        str[r - j - 1] = temp;
    }

    printf("%s", str);

    return 0;
}
