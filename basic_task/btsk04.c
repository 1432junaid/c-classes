//WAP to print the factorial of a number 

#include<stdio.h>
int main(){
	int x=0,i,fact=1;
	printf("Enter a number\n");
	scanf("%d",&x);
	if(x<0){
		printf("EROR !! factorial is +ve number only\n");
	}else{
		for(i=1;i<=x;++i){
			fact *=i;
			}
		printf("factorial of %d=%d\n",x,fact);
	}
	return 0;
}
