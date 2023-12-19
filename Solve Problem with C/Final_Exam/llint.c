#include<stdio.h>
#include<string.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int arr[100];

    for(int i = 0; i<n; i++){
        scanf("%lld", &arr[i]);
    }

    long long int counter[101] = {0};
    for(int i = 0; i<n; i++){
        long long int value = arr[i];
        counter[value]++;
    }
    for(int i = 1; i<=n; i++){
        if(counter[i] == 0) continue;
        printf("%lld --> %lld \n",arr[i-1], counter[i]);
    }
    return 0;
}


