
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


int main() {

    char array[101];
    int size, i, j, count=0;

    scanf("%d", &size);

    scanf("%s", array);

    for(int i = 0; i< size; i++){
        if(islower(array[i])){
            array[i] = array[i] - 32;
        }
    }

    for(i = 0; i < size; i++) {
        for (j=0; j<i; j++){
            if (array[i] == array[j])
                break;
        }

        if (i == j){
            count++;
        }
    }

    if(count == 26){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;

	}







