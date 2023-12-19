#include<stdio.h>
#include<math.h>
#include<string.h>


void makeCopy(int n, int input[], int output[] ){
    for(int i = 0; i<n; i++){
        output[i] = input[i];
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int input[n], output[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &input[i]);
    }

    makeCopy(n, input, output);

    for(int i =0; i<n; i++){
        printf("%d ", output[i]);
    }

}
