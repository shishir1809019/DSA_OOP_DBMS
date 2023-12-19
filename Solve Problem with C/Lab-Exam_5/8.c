#include<stdio.h>
#include<string.h>
#include<stdbool.h>


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
        int maxelement = a[steps] , pos = steps;
        for(int i = steps; i<n; i++){
            if(a[i] > maxelement){
                maxelement = a[i];
                pos = i;
            }
        }
        if(is_reverese_sorted(n, a)) break;
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
