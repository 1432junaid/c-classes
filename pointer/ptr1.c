#include<stdio.h>
int main(){
	int x=10;
	char ch='A';
	char* p=&ch;
	int* ip=&x;
	printf("%d\n",p);
	printf("%d\n",p);
	printf("%ld\n%ld",sizeof(p),sizeof(ip));
	return 0;
}
