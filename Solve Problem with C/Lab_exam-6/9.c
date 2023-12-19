#include <stdio.h>
#include<string.h>

int GetMsbPos(unsigned int num)
{
    int cnt = 0;

    while (num) {
        cnt++;
        num = num >> 1;
    }

    return cnt - 1;
}

void toBinary(unsigned int val, char str[],int k){
    int idx = 0;
    while(k > 0){
        int d = val % 2;
        val = val / 2;
        str[idx] = '0' + d;
        idx++;
        k--;
    }

    for(int i = 0; i<idx/2; i++){
        int temp = str[i];
        str[i] = str[idx-i-1];
        str[idx-i-1] = temp;
    }

    str[idx] = '\0';
}


int main()
{
    unsigned int num = 0;
    int pos = 0;

    char sx[100];
    char sy[100];

    int k = 8;

    printf("Enter Number: ");
    scanf("%d", &num);

    pos = GetMsbPos(num);

    int flipedMsb = num ^ 1 << pos;

    toBinary(num, sx, k);
    toBinary(flipedMsb, sy, k);

    printf("num  %s\n", sx);
    printf("fnum %s\n", sy);

    return 0;
}

