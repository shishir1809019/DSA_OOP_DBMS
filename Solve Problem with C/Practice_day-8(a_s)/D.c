
#include<stdio.h>

int main() {
	char a[100], b[100];
	scanf("%s%s", a,b);

	int idx = 0;
	while(a[idx] == b[idx] && a[idx] != '\0' && b[idx] != '\0'){
        idx ++;
	}
	if(a[idx] == '\0' && b[idx] == '\0'){
        printf("No\n");
	}
	else if(a[idx] == '\0' && b[idx] != '\0'){
        printf("Yes\n");
	}
	else if(a[idx] != '\0' && b[idx] == '\0'){
        printf("No\n");
	}
	else if(a[idx] < b[idx]){
        printf("Yes\n");
	}
	else{
        printf("No\n");
	}

	return 0;
}
