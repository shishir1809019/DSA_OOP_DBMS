#include<stdio.h>


int findNegatives(int n, int in[], int out[]){
    int count= 0;
//    out[n];
    for(int i = 0; i < n; i++){
        if(in[i] < 0){
            out[count] = in[i];
            count++;

        }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int in[n];
    int out[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &in[i]);
    }

    int negNum = findNegatives(n, in, &out);

    for(int i =0; i< negNum; i++){
        printf("%d ", out[i]);
    }


    printf("\n %d \n", negNum);


}
