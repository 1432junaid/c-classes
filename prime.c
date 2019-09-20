#include<stdio.h>
int main(){
	int x;
	printf("\t\t\t\t\n*******Enter a number to check prime or not ******\n\n\n\n\n");
	scanf("%d",&x);
	for(int i=2;i<x;i++){
		if(x%i==0){
			printf("this is not a prime number\n");
			return -1;
		}
	}
	printf("Prime number\n");
	return 0;
}
