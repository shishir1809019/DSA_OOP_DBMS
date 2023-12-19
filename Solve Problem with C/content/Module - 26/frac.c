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

//    return f;
}

struct Fraction inputFraction(){
    struct Fraction f;
    scanf("%d %d", &f.num, &f.denum);
    return f;
}

void print(struct Fraction f){
    printf("%d/%d", f.num, f.denum);

}

struct Fraction add(struct Fraction a, struct Fraction b){
    struct Fraction ans;
    ans.num = a.num * b.denum + b.num*a.denum;
    ans.denum = a.denum * b.denum;
    return ans;
};

int main()
{
    struct Fraction a, b;
    a = inputFraction();
    b = inputFraction();

    a = reduce(a);
    b = reduce(b);

    print(a);
    printf("+");
    print(b);
    printf("=");

    struct Fraction sum = add(a, b);
    print(reduce(sum));
    printf("\n");
}
