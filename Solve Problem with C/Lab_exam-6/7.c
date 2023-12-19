#include<stdio.h>
#include<string.h>

unsigned int binaryToInt(char str[]){
    int len = strlen(str);

    unsigned int ans = 0;
    for(int i = len - 1, p2 = 1; i >= 0; i--, p2*=2){
        int bit = str[i] - '0';
        printf("%d %d %d\n",i, p2, bit);
        if(bit == 1) ans += p2;
    }
    return ans;
}

unsigned int binaryToInt2(char str[]){
    int len = strlen(str);

    unsigned int ans = 0;
    for(int i = 0; i<len; i++){
        int bit = str[i] - '0';
        ans = ans*2 + bit;
    }
    return ans;
}

void toBinary(unsigned int val, char str[],int k){
    int idx = 0;
    while(k > 0){
        int d = val % 2;
        val = val / 2;
//        printf("%d",d);
        str[idx] = '0' + d;
        idx++;
        k--;
    }

    //reverse
    for(int i = 0; i<idx/2; i++){
        int temp = str[i];
        str[i] = str[idx-i-1];
        str[idx-i-1] = temp;
    }

    str[idx] = '\0';
}


int main()
{

    unsigned int x = 10;
    unsigned int y = 10;

    char sx[100];
    char sy[100];
    char sand[100];

    int k = 8;

    toBinary(x, sx, k);
    toBinary(y, sy, k);

    printf("sx = %s\n", sx);
    printf("sy = %s\n", sy);

    unsigned int and = 1^2^3^4;
    toBinary(and, sand, k);

    printf("and %d\n", and);
    printf("sand %s\n", sand);

    return 0;
}

