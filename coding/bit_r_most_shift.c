#include<stdio.h>
int main(){
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
//	a=a&(a-1);
//	a=a^(a-1);
	a=a|(a+1);
	printf("%d\n",a);
	return 0;
}
