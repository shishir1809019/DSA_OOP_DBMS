#include<stdio.h>
#include<string.h>

//int min(int a, int b){
//    return a < b? a : b;
//}

void swap(int *a, int *b){
    static int count = 0;
    count++;
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d times call\n", count);
}

void sort(int n, int a[]){
    for(int steps = n-1; steps >= 0 ; steps--){
        int maxelement = a[steps] , pos = steps;
        for(int i = steps; i>=0; i--){
            if(a[i] > maxelement){
                maxelement = a[i];
                pos = i;
            }
        }

        swap(&a[steps], &a[pos]);
//        for(int i =0; i< n; i++){
//            printf("%d ", a[i]);
//        }
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

