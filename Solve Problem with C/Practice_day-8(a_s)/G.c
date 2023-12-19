
#include<stdio.h>

int main() {
	char a[100], b[100];
	scanf("%s\n%s", a,b);


	for(int i=0;i<=strlen(a);i++){
      if(a[i] >= 65 && a[i] <= 90) a[i]=a[i]+32;
      if(b[i] >= 65 && b[i] <= 90) b[i]=b[i]+32;
   }

	int idx = 0;
	while(a[idx] == b[idx] && a[idx] != '\0' && b[idx] != '\0'){
        idx ++;
	}
	if(a[idx] == '\0' && b[idx] == '\0'){
        printf("0\n");
	}
	else if(a[idx] == '\0' && b[idx] != '\0'){
        printf("-1\n");
	}
	else if(a[idx] != '\0' && b[idx] == '\0'){
        printf("1\n");
	}
	else if(a[idx] < b[idx]){
        printf("-1\n");
	}
	else{
        printf("1\n");
	}

	return 0;
}
