    #include<stdio.h>
    #include<string.h>

int main()
{
    int a; double b; char c;
    int* pa = &a;
    double *pb = &b;
    char *pc = &c;

    printf("%d\n",*pa-2);
    printf("%p -> %lf\n",pb+3, *pb+3);
    printf("%d", *pa - *pb);

    printf("%c", *c+6);



    return 0;
}




