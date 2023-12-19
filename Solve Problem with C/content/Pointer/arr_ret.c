#include<stdio.h>
#include<string.h>

int * makeNsquores(int n){
    int *squores = (int*)malloc(n*sizeof(int));

    for(int i = 0; i<n; i++){
        squores[i] = i*i;
    }

    return squores;
}

int main()
{
    int n;
    scanf("%d", &n);

    int* sq;
    sq = makeNsquores(n);

    for(int i = 0; i<n; i++){
        printf("%d ", sq[i]);
    }

    return 0;

}
