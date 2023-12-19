#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Student {
    char name[41];
};

int main(){

    int n;
    scanf("%d ", &n);

    struct Student arr[n];

    for(int i= 0; i< n; i++){
        gets(arr[i].name);
    }
    for(int i =0; i< n; i++){
        for(int j = i+1; j< n; j++){
            if(strcmp(arr[i].name, arr[j].name) == 0){
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");

    return 0;
}
