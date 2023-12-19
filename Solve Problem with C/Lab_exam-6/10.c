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
        ans.str[idx] = '0' + d;
        idx++;
        k--;
    }

    for(int i = 0; i<idx/2; i++){
        int temp = ans.str[i];
        ans.str[i] = ans.str[idx-i-1];
        ans.str[idx-i-1] = temp;
    }

    ans.str[idx] = '\0';
    return ans;
}

unsigned int flipBit(unsigned int mask, int k){
    return mask & k;
}

int main()
{

    int y = 240;
    int x;
    scanf("%d", &x);

    printf("Flip: %s\n",toBinary(flipBit(x,y), 8).str);

    return 0;
}
