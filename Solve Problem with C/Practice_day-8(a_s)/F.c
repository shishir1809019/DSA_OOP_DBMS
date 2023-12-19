
#include<stdio.h>
#include <math.h>

int main() {
	long long int n, i,b;
	scanf("%lli", &n);

	for(i = 1; i<64; i++){
        b = pow(2,i);

        if(b>n) break;
	}
	printf("%lli\n", i-1);

    return 0;

}

