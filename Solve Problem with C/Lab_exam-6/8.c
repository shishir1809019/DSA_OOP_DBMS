

#include<stdio.h>
#include<stdbool.h>

int findXOR(int l, int r){
    int ans = l;
    for(int i = ans+1; i <= r; i++){
            ans ^= i;
    }
    return ans;
}

int main()
{
    int l = 12;
    int r = 25;

    int ans = findXOR(l, r);
    printf("%d\n", ans);

    return 0;
}
