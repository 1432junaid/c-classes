#include<stdio.h>
int fact(int);
int main(){
	int x;
	printf("enter a number\n");
	scanf("%d",&x);
	int a = fact(x);
	printf("%d\n",a);
}

int fact(int n){
	if(n==1)return 1;
	return n*fact(n-1);
}
