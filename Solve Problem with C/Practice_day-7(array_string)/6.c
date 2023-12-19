#include<stdio.h>

int main()
{
    int arr[10] = { 10, 12, 20, 25, 13, 10, 9, 40, 60, 5};

    int search_element = 25;
    int count = 0;

    for(int i = 0; i< 10; i++){
        if(arr[i]  == search_element){
            printf("%d", i);
        }
    }

}
