#include<stdio.h>
#define AGE 20

int main(){
	int x=AGE;
	printf("AGE is =%d\n",x);
	#undef AGE
//	#ifndef AGE 
	#if !defined(AGE)
	#define AGE 35
	#endif
	x=AGE;
	printf("Age is %d\n",x);
	return 0;
}
