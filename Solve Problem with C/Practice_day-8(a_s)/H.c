
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main() {
	int t;
	scanf("%d", &t);

	for(int k = 1; k<=t; k++){
    int n,i,j;
	scanf("%d", &n)     ;

	char str[n];
    scanf("%s", str);

    bool is_unique = true;


    for(i=0; i< n; i++ ){
       if(str[i] == str[i+1]) continue;

         for (j = i + 1; j < n; j++)
		{
			// if a character is repeated
			if (str[i] == str[j])
			{
				// set boolean variable to false
				is_unique = false;
			}
		}
    }
    if(is_unique) printf("YES\n");
    else printf("NO\n");
	}

    return 0;

	}




