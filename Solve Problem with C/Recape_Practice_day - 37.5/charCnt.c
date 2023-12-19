#include<stdio.h>

int main()
{
    FILE *inputFile;
    inputFile = fopen("input2.txt", "r");

    if(inputFile == NULL){
        printf("No file found");
        return 0;
    }

    int count = 0;
    while(1){
        char ch = fgetc(inputFile);
        if(ch == EOF){
            break;
        }
        //fputc(ch, outputFile);
        else count++;
    }
    printf("%d", count);

    return 0;

}
