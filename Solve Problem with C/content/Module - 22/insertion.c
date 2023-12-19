#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//int min(int a, int b){
//    return a < b? a : b;
//}

bool is_reverese_sorted(int n, int a[]){
    bool is_sorted = false;
    for(int i = 0; i< n; i++){
        if(a[i] > a[i+1]) is_sorted = true;
        else {
            is_sorted = false;
            break;
        }
    }
    return is_sorted;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int a[]){
    for(int steps = 0; steps < n ; steps++){
        int minelement = a[steps] , pos = steps;
        for(int i = steps; i<n; i++){
            if(a[i] > minelement){
                minelement = a[i];
                pos = i;
            }

            for(int i = 0 ; i< n; i++){
                printf("%d", a[i]);
            }
            printf("\n");

        }
        if(is_reverese_sorted(n, a)) break;
        printf(" step %d done\n", steps);
        swap(&a[steps], &a[pos]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i =0; i<n; i++){
        scanf("%d", &a[i]);
    }
    sort(n, a);

    for(int i = 0; i<n ;i++){
        printf("%d ", a[i]);
    }

    return 0;
}
