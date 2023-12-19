#include<stdio.h>

struct Fraction{
    int num;
    int denum;
};

int gcd(int a, int b){
    while(b > 0){
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

struct Fraction reduce(struct Fraction f){
    int g = gcd(f.num, f.denum);
    f.num /= g;
    f.denum /= g;

    return f;
}

struct Fraction inputFraction(){
    struct Fraction f;
    scanf("%d %d", &f.num, &f.denum);
    return f;
}

void print(struct Fraction f){
    printf("%d/%d", f.num, f.denum);

}

struct Fraction reverse(struct Fraction a){

    int temp = a.num;
    a.num = a.denum;
    a.denum = temp;

    return a;
};

int main()
{
    struct Fraction a;
    a = inputFraction();

    a = reduce(a);

    print(a);
    printf("=");

    struct Fraction rev = reverse(a);
    print(reduce(rev));
    printf("\n");
}
