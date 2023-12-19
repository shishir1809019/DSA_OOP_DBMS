#include <string.h>

int main()
{
    char s[1000];

    printf("Enter  the string : ");
    gets(s);
    int n=strlen(s);

    int c = 0, i;
    for(i=0;i<n/2;i++)
    {
    	if(s[i]==s[n-i-1])
    	c++;

 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");



    return 0;
}
