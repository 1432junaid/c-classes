#include<stdio.h>
int main(){
	int x;
	printf("Enter a numbere\n");
	scanf("%d",&x);
	int a=sum(x);
	printf("%d\n",a);
	return 0;
}
int sum(int n){
	if(n==1)return 1;
	return n+sum(n-1);
}
