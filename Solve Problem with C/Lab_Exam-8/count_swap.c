#include<stdio.h>
#include<string.h>

int count_swaps(){
    static count = 0;
    count++;
    return count;
}

int sort(int *a, int n){
    int swap_num;
    for(int pos = 0; pos < n-1; pos++){
        for(int check = pos+1; check < n; check++){
            if(a[check] < a[pos]){
                swap_num = count_swaps();
                int tmp = a[check];
                a[check] = a[pos];
                a[pos] = tmp;
            }
        }
    }
    return swap_num;
}

int main()
{
    int arr[6] = {1, 2 , 3 , 4, 6 , 5};

    int num = sort(arr, 6);

    for(int i = 0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%d", num);

    return 0;
}
