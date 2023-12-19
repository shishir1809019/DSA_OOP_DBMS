#include<stdio.h>
#include<string.h>

int main()
{
    char text[100] = "amma bari jabo";


    char *pos = strstr(text, "bari");

    if(!pos){
        printf("Not Found");
    }
    else{
        printf("Found at %d",pos - text);
    }

    return 0;
}

