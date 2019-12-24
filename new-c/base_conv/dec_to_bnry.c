#include<stdio.h>

void dec_to_bnry(unsigned int data){
	int rem[20];
	int i=0;
	for(i=0;data>0;i++){
		rem[i] = data % 2;
		data = data / 2;
	}

	printf("binary number is =");

	for(i=i-1;i>=0;i--){
		printf("%d",rem[i]);
	}
	printf("\n");
}



int main(){
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	dec_to_bnry(x);
	return 0;
}
