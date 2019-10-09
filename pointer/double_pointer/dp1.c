#include<stdio.h>
int main(){
	int x=4;
	int *p=&x;
	int **dp;
	dp=&p;
	printf("x = %d\n",x);
	printf("p = %d\n",*p);
	printf("dp =%d\n",dp);
	printf("dp = %d\n",**dp);
	return 0;
}
