#include<stdio.h>
#include<stdbool.h>

bool check_array(int n, int arr[]){
    int count = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n; j++){
            if(i == arr[j]){
                count++;
                break;
            }
        }
    }
    if(count == n) return true;
    else return false;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

     if(check_array(n, arr)) printf("true");
     else printf("false");

}
