#include<stdio.h>
#include<math.h>

int gcd(int a, int b){
     while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        }
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0 ; i<n; i++){
        scanf("%d", &a[i]);
    }

    int result = a[0];
    for(int i = 0; i<10; i++){
        result = gcd(result, a[i]);
    }

    printf("%d", result);

    return 0;
}
