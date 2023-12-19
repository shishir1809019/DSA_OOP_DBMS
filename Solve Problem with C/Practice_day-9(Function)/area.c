#include<stdio.h>

void rectangleArea(int length, int width){
    printf("%d", length*width);
}

int main()
{
    int lenght, width;
    scanf("%d%d", &lenght, &width);

    rectangleArea(lenght, width);

    return 0;
}
