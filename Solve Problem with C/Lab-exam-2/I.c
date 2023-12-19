
#include<stdio.h>

int main()
{

    int marks;
    scanf("%d", &marks);

    if(marks >=0 && marks < 40){
        printf("%d\n", 40 - marks);
    }

    else if(marks >=40 && marks < 70){
        printf("%d\n", 70 - marks);
    }

    else if(marks >=70 && marks < 90){
        printf("%d\n", 90 - marks);
    }
    else{
        printf("expert\n");
    }


    return 0;
}









