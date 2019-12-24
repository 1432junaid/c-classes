#include<stdio.h>
int main(){
	int x;
	printf("Enter any number\n");
	scanf("%d",&x);
	if(x & 1 == 1){
		printf("number is odd\n");
	}else{
		printf("number is even\n");
	}
	return 0;
}
