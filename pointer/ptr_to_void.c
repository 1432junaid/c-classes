#include<stdio.h>
int main(){
	void *p;
	int x=10;
	float b = 2.3f;
//	p=&x;
	p=&b;
//	printf("%f\n",*p);
	printf("%f\n",*((float*)p));
	return 0;
}
