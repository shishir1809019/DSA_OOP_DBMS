#include<stdio.h>
#include<string.h>

int min(int a, int b){
    return a < b? a : b;
}

void swap(int *a, int *b){
    static int count = 0;
    count++;
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d times call\n", count);
}
int is_sorted(int n, int a[]){
    int sorted = 0;
    for(int i = 0; i<n; i++){
        if(a[i] < a[i+i]){
            sorted = 1;
        }
        else sorted = 0;
    }
    return sorted;
}

void sort(int n, int a[]){
    for(int steps = 0; steps < n; steps++){
        for(int i = 0; i+1 <n; i++){
            if(a[i] > a[i+1]){
                swap(&a[i], &a[i+1]);

//                printf("Swap %d %d\n", i, i+1);
//                for(int i = 0; i<n; i++){
//                    printf("%d ", a[i]);
//                }
//                printf("\n");
            }
        }

        if(is_sorted(n, a)) break;
//         printf("Step %d done\n", steps);
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

