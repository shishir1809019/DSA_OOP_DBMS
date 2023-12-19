#include<stdio.h>
#include<stdbool.h>

struct Binary{
    char str[50];
};

struct Binary toBinary(unsigned int val, int k){
    struct Binary ans;
    int idx = 0;
    while(k > 0){
        int d = val % 2;
        val = val / 2;
//        printf("%d",d);
        ans.str[idx] = '0' + d;
        idx++;
        k--;
    }

    //reverse
    for(int i = 0; i<idx/2; i++){
        int temp = ans.str[i];
        ans.str[i] = ans.str[idx-i-1];
        ans.str[idx-i-1] = temp;
    }

    ans.str[idx] = '\0';
    return ans;
}

bool getBit(unsigned int mask, int k){
    return (mask & (1 << k)) != 0;
}

unsigned int setBit(unsigned int mask, int k){
    return mask | (1<<k);
}
unsigned int clearBit(unsigned int mask, int k){
    return mask & ~(1<<k);
}
unsigned int flipBit(unsigned int mask, int k){
    return mask ^ (1 << k);
}

unsigned char rightRotate(unsigned char mask, int k){
    int lastk = mask & ((1 << k) - 1);
    return (mask >> k) | (lastk << (8 - k));
}

int main()
{
    int x = 54;
    printf("%d = %s\n", x, toBinary(x, 8).str);

    for(int i = 0; i<8; i++){
        unsigned char R = rightRotate(x, i);
        printf("Rotate %d: %s\n", i, toBinary(R, 8).str);

    }

    return 0;
}
