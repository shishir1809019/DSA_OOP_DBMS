#include<stdio.h>
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

void sort(int n, int a[]) {
    for (int steps=0; steps<n; steps++) {
        for (int i=n-1; i>0; i--) {
           if(a[i-1] < a[i]){
                int temp  = a[i-1];
                        a[i-1] = a[i];
                        a[i] = temp;
            }
       }
     if(is_reverese_sorted(n, a)) break;
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
