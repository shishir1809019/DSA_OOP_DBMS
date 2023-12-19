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

int main()
{
    int x = 54;
    printf("%d = %s\n", x, toBinary(x, 8).str);

    for(int i = 0; i<8; i++){
        printf("%dth bit: %d\n", i, getBit(x, i));
        printf("Clear: %s\n",toBinary(clearBit(x,i), 8).str);
        printf("Set: %s\n",toBinary(setBit(x,i), 8).str);
        printf("Flip: %s\n",toBinary(flipBit(x,i), 8).str);
    }

    return 0;
}
