#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input22.txt", "r");
    outputFile = fopen("output22.txt", "a");


    int n;
    fscanf(inputFile, "%d", &n);

    int sum = 0;
    for(int i = 0; i<n; i++){
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }

    fprintf(outputFile, "Case 1: Sum -> %d\n", sum);

    return 0;
}
