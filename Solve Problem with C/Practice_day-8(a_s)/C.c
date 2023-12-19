
#include<stdio.h>


int main() {
	int n,k;
	scanf("%d%d", &n, &k);

	int arr[n];
	for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
	}
	int finisher_score = arr[k-1];
	int next_round = 0;
	for(int i = 0; i<n; i++){
        if(arr[i] > 0 && arr[i] >= finisher_score){
            next_round++;
        }
	}
	printf("%d", next_round);


    return 0;

	}




