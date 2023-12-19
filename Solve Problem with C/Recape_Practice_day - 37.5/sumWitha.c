
#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input22.txt", "r");
    outputFile = fopen("output22.txt", "a");

    int t;
    scanf("%d",&t);
    for(int k = 0; k<t; k++){
        int n;
        scanf("%d", &n);

        int sum = 0;
        for(int i = 0; i<n; i++){
            int a;
            scanf("%d", &a);
            sum+=a;
        }
    fprintf(outputFile, "Case %d: Sum -> %d", k,sum);
    }

    return 0;
}
