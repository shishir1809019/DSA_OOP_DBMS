
#include<stdio.h>
#include<stdbool.h>

int main() {
	int n;
	scanf("%d", &n);

	int score[n];
	for(int i = 0; i< n ; i++){
        scanf("%d", &score[i]);
	}

	int answer = 0;

	for(int i = 0; i< n; i++){
        if(i==0) continue;

        bool isMax = true, isMin = true;

        for(int j = 0; j<i; j++){
            if(score[j] <= score[i]){
                isMin = false;
            }
            if(score[j] >= score[i]){
                isMax = false;
            }
        }

        if(isMax || isMin){
            answer++;
        }
	}

	printf("%d\n", answer);
	// another way

	int answer2 = 0, minvalue = score[0], maxvalue = score[0];

	for(int i = 1; i< n; i++){
        if(score[i] > maxvalue || score[i] < minvalue){
            answer2++;
        }

        if(score[i] > maxvalue){

            maxvalue = score[i];
        }
        if(score[i] < minvalue){
            minvalue = score[i];
        }

	}

	printf("%d", answer2);

	return 0;
}


