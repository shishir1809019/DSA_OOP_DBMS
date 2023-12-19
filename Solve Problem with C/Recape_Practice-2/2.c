#include<stdio.h>


void makeProduct(int n, int a[], int *prod){

    for (int i=0; i<n; i++) {
        *prod = *prod * a[i];
    }
}

int main()
{

    int n;
    scanf("%d", &n);

//    double *b = (double*) malloc(n*sizeof(double));
//    printf("%d", sizeof(b));

    int a[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }

    int prod=1;
    makeProduct(n, a, &prod);

    printf("%d", prod);

}
