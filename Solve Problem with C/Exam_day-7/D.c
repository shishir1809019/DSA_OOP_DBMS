#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[50];
    int count = 0;
    for(int i = 0; i<n; i++){
        scanf("%s", str);
        if(!strcmp("Tetrahedron",str)){
            count = count + 4;
        }
        else if(!strcmp("Cube",str)){
            count = count + 6;
        }
        else if(!strcmp("Octahedron",str)){
            count = count + 8;
        }
        else if(!strcmp("Dodecahedron",str)){
            count = count + 12;
        }
        else if(!strcmp("Icosahedron",str)){
            count = count + 20;
        }
    }
    printf("%d\n", count);

    return 0;
}
