#include<stdio.h>
int main(){
	register int x=20;
	printf("%d\n",x);
//	int *p = &x;  ***we can't determine the address of register
//	printf("%d\n",p);    **register is very fast but we can't assign the address of register
	return 0;
}
