    #include<stdio.h>
    #include<string.h>
    #include<stdbool.h>
    #include<ctype.h>


void rotate(int k, int arr[])
{
    //int length = sizeof(*arr)/sizeof(*arr[0]);

    for(int i = 0; i<k; i++){
        int first, j;
        first = arr[0];
        for(int j = 0; j < 5-1; j++){
            arr[j] = arr[j+1];
        }

        arr[5-1] = first;
    }
}

int main()
{
    int k;
    scanf("%d", &k);
    int arr[5];
    for(int i = 0; i< 5; i++){
        scanf("%d", &arr[i]);
    }

    rotate(k, arr);

    for(int i = 0; i< 5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}



