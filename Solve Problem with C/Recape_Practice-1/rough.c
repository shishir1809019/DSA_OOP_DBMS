#include <stdio.h>

void makeStrCopy(char in[], char out[]){
      strcpy(out, in);
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i<9 ; i++){
        printf("%d\n", &*(a+4));
    }


    return 0;

}
