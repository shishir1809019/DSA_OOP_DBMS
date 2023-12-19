#include<stdio.h>

int main()
{
    char arr[] = "Hello";

    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i=length-1; i>=0; i--){
        printf("%c",arr[i]);
    }

}

