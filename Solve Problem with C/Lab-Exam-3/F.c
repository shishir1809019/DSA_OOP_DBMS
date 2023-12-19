

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


int main() {
    long long int n;
    scanf("%lli", &n);

    int good_n = 0;
    while(n>0){
        int m=n%10;
        n=n/10;


        if(m == 4 || m == 7){
            good_n++;
        }

    }
    if(good_n == 4 || good_n == 7 ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

	}







