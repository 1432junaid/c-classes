#include<stdio.h>
int main(){
	const int x=50;
	// int x=20;
	int *p = &x;
	printf("%d\n",&x);
	printf("%d\n",p);
	const int *p =&x;
	int * const q =&y;
	int y=20;
	q=&x;
	const int * const r =&x;
	return 0;
}
