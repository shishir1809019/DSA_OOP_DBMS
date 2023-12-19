#include<stdio.h>

int main()
{
    int x,i,j,ans = 0;
    scanf("%d", &x);

    while(x){
		if(x%2==1)
			ans ++;
		x=x/2;
	}
	printf("%d", ans);

    return 0;
}
