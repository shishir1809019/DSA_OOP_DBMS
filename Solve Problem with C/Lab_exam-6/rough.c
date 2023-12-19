#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    scanf("%s", &arr);

    int counter[26] = {0};

    for(int i = 0; i < strlen(arr); i++){
        char value = arr[i];
        counter[value-'a']++;
    }

    for(int value = 'a'; value <= 'z'; value++){
        if(counter[value-'a'] > 0){
            printf("value --> %c count --> %d\n", value, counter[value - 97]);
        }
    }

    return 0;

}
