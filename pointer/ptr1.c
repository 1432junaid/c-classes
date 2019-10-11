#include<stdio.h>
int main(){
	int x=10;
	char ch='A';
	char* p=&ch;
	int* ip=&x;
	printf("p=%d\n",p);
	printf("ip=%c\n",p);
	printf("address of x=%d\n",&x);
	printf("%ld\n%ld\n",sizeof(p),sizeof(ip));
	return 0;
}
