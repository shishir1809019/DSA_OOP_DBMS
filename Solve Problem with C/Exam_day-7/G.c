#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
//    for(int i=0; i<n; i++)
//    {
//        for(int j=i+1; j<n; j++)
//        {
//            if(arr[j] > arr[i])
//            {
//                int tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
    int Spoint = 0, Dpoint = 0;
    for(int i = 0; i<n; i++){
        if(i % 2 == 0){
            if(arr[i] > arr[n-1-i]) Spoint += arr[i];
            else Spoint += arr[n-1-i];
        }
        else{
            if(arr[i] > arr[n-1-i]) Dpoint += arr[i];
            else Dpoint += arr[n-1-i];
        }
    }
    printf("%d %d\n", Spoint, Dpoint);

    return 0;
}
