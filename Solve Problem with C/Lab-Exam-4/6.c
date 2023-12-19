#include<stdio.h>
#include<math.h>

void makeNArray(int n, int squares[]){
    for(int i=0; i< n; i++){
        squares[i] = squares[i]*squares[i];
    }
    for(int i = 0; i<n; i++){
        printf("%d ", squares[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int squares[n];

    for(int i = 0; i< n; i++){
        scanf("%d", &squares[i]);
    }

    makeNArray(n, squares);
}
