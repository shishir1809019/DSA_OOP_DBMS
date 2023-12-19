#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d", &n, &m);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] >= 0)
        {
            break;
        }
        sum += arr[i];
    }
    printf("%d\n", -sum);
}
