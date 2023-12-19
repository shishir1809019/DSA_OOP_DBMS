#include <stdio.h>
#include <stdlib.h>

int main(){
	int A,B,C,D,E,F,X,m1=0,m2=0,i;
	scanf("%d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&X);
	for(i=1;i<=X;i++){
		if(i%(A+C)<=A&&i%(A+C)>0) m1+=B;
		if(i%(D+F)<=D&&i%(D+F)>0) m2+=E;
	}
	if(m1>m2) printf("Takahashi");
	if(m1<m2) printf("Aoki");
	if(m1==m2) printf("Draw");
	return 0;
}
