#include<stdio.h>

void dec_to_bnry(unsigned int a){
	int b[30];
	int i=0;

//	int len=sizeof(b)/sizeof(int);

	for(i=0;a>0;i++){
		b[i] = a % 2;
		a = a / 2;
	}

	for(int j=i-1; j>=0;j--){
		printf("%d",b[j]);
	}
	printf("\n");
}

int main(){
	unsigned int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	dec_to_bnry(x);

	return 0;
}
