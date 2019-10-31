#include<stdio.h>
int main(){
	int x=10;
	int *ip;
	ip=&x;
	printf("%d\n",ip);
//	printf("increment=%d\n",ip++);
	printf("%d\n",*ip);
	printf("address_x=%e\n",&x);
	printf("address_x=%e",ip);
	int y;
	y=*ip;
	printf("%d\n",y);


	return 0;
}
