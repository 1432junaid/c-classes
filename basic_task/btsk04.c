//WAP to print the factorial of a number 

#include<stdio.h>
int main(){
	int x,i;
	printf("Enter a number\n");
	scanf("%d",&x);
	for(i=x;i!=0;--i){
		x=x*(i-1);
	}
	printf("%d",x);
	return 0;
}
