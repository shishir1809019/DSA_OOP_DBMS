
#include<stdio.h>


void update(int n, char a[])
{
    n++;
    a[0] = '0';
}

int main()
{
    int n = 10;
    char a[] = "1";
    update(n, a);
    printf("%d %s", n, a);
}

	//0 1 2 3 4 5
	//0 1 1 2 3 5





