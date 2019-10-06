#include<stdio.h>
int swap(int* , int* );
int main(){
	printf("Enter two number to swap\n");
	int a,b;
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("a=%d\tb=%d\n",a,b);
	return 0;
}

int swap(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
	return 0;
}
