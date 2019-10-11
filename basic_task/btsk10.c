// WAP to rev a decimal number

#include<stdio.h>
int main(){
	int x,rev=0;
	printf("Enter  a numbeer\n");
	scanf("%d",&x);
	while(x){
	rev=rev%10;
	x=x/10;
	}
	printf("%d",rev);
	return 0;
}
