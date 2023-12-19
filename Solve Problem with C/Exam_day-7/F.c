#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int countMiska = 0, countChris = 0;
    for(int i = 0; i<n; i++){
        int valueM, valueC;
        scanf("%d %d", &valueM, &valueC);

        if(valueM > valueC) countMiska++;
        else if(valueM < valueC) countChris++;
        else{
            countMiska++;
            countChris++;
        }
    }
    if(countMiska > countChris) printf("Mishka\n");
    else if(countMiska < countChris) printf("Chris\n");
    else printf("Friendship is magic!^^\n");

    return 0;
}
