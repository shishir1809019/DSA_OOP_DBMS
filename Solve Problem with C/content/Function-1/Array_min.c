#include<stdio.h>

int getMin(int a, int b){
    if(a < b) return a;
    else return b;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int ans = a[0];
    for(int i = 0; i<n; i++){
        ans = getMin(ans, a[i]);
    }

    printf("Min value is %d", ans);

    return 0;
}
