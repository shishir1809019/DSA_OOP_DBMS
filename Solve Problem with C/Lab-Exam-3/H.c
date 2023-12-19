
    #include<stdio.h>
    #include<string.h>
    #include<stdbool.h>
    #include<ctype.h>


    int main() {
        int n, r;
        scanf("%d%d", &n, &r);

        int arr[n];
        for(int i = 0; i<n; i++){
            scanf("%d", &arr[i]);
        }

        int length = sizeof(arr)/sizeof(arr[0]);

        for(int i = 0; i<r; i++){
            int first, j;
            first = arr[0];
            for(j = 0; j<length - 1; j++){
                arr[j] = arr[j+1];
            }

            arr[j] = first;
        }

        for(int i = 0; i<length; i++){
            printf("%d ", arr[i]);
        }

        return 0;

        }








