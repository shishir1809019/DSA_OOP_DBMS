#include<stdio.h>

int main()
{
    char arr[] = "I love Philtron.";

    int vowels = 0;
    int consonants = 0;

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<length; i++){
        if(arr[i] == 'a'|| arr[i] == 'e'||arr[i] == 'i'||arr[i] == 'o'||arr[i] == 'u'||arr[i] == 'A'||arr[i] == 'E'||arr[i] == 'I'||arr[i] == 'O'||arr[i] == 'U'){
            vowels++;
        }
        else if((arr[i] >='a' && arr[i] <= 'z' || arr[i] >='A' && arr[i] <= 'Z') && (arr[i] != 'a'|| arr[i] != 'e'||arr[i] != 'i'||arr[i] != 'o'||arr[i] != 'u'||arr[i] != 'A'||arr[i] != 'E'||arr[i] != 'I'||arr[i] != 'O'||arr[i] != 'U')){
            consonants++;
        }

    }

    printf("%d\n",vowels);
    printf("%d",consonants);


}


