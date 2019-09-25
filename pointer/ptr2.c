#include<stdio.h>
int main(){
	int x=10;
	int* p;
	p=&x;
	int y;
	*p=20;
	y =*p;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%p\n",p);
	p++;
	printf("%p\n",p);
	return 0;
}

