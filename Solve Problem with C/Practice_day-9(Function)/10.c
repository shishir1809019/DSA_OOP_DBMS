#include<stdio.h>

void makePositive(int a) {
	if (a < 0) {
		a = -a;
	}
	printf("%d", a);
}

int main()
{
    int a;
    scanf("%d", &a);
    makePositive(a);
}

