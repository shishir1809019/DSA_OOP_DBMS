
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main() {


	char str[101];
	scanf("%s", str);

    int count = 0;

    for(int i = 0; i < strlen(str); i++){
        bool found = false;
        for(int j = 0; j < i; j++){
            if(str[j] == str[i]){
                found = true;
                break;
            }
        }
        if(!found){
            count++;
        }
    }

    if(count%2==0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }

    return 0;

	}






