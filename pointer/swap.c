#include<stdio.h>
void swap(int*,int*);
int main(){
	int x=10;
	int y=20;
	swap(&x,&y);
	printf("x=%d\ty=%d\n",x,y);
	return 0;
}

void swap(int* a,int* b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
