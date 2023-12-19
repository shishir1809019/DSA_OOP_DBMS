

#include<stdio.h>


int main() {


	int arr[100];
	int n;
	scanf("%d", &n);

	for(int i = 0; i< n; i++){
        scanf("%d",&arr[i]);
	}

	int max = arr[0];

	for(int i = 1;i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
	}
	int  count=0;
	for(int i = 0; i<n ; i++){
        if(arr[i] < max){
            count+= (max - arr[i]);
        }
	}

	printf("%d\n", count);

    return 0;

	}





