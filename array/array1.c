#include<stdio.h>
void printer();
int a[5];
int main(){
	int i;
	for(i=0;i<5;i++){
		a[i]=i+10;
		printf("%d ",a[i]);
	}
	printf("\n");
	printer();
	return 0;
}

void printer(){
	int b[5];
	int j;
	for(j=0;j<5;j++){
		printf("%d ",b[j]);
	}
	printf("\n");
}
