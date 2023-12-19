#include<stdio.h>
#include<math.h>

void printCall(){
    static count = 1;
    printf("Called %d times\n", count++);
}

int main()
{

    printCall();
    printCall();
    printCall();
}
