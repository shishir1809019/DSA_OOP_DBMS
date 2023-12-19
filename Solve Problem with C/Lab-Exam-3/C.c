
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main() {

    int n;
    scanf("%d", &n);

    char str[n];
    scanf("%s", str);

    int count = 0;

    for(int i = 0 ;i<n; i++){
        bool not_found = false;
        if(str[i] != str[i+1]){
            not_found = true;
        }

        if(!not_found){
            count++;
        }
    }
    printf("%d", count);

    return 0;

	}







