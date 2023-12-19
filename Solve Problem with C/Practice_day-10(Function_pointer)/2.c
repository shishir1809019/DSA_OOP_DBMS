#include<stdio.h>
#include<math.h>

int number;
void set(int v){
    number = v;
}
void makedouble(){
    number*=2;
}
void print(){
    printf("v is now %d\n", number);
}

int main()
{
    set(10);
    makedouble();
    makedouble();
    print();

    return 0;
}
