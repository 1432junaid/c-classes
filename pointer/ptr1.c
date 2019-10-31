#include<stdio.h>
int main(){
	int x=10;			//variable declaration
	int *p; 			//pointer declaration
	p=&x;				//pointer asign address of x
/*	char ch='A';
	char* p=&ch;
	int* ip=&x;
*/ //	printf("p=%d\n",p);
//	printf("ip=%c\n",p);
//	printf("address of x=%d\n",&x);
//	printf("%ld\n%ld\n",sizeof(p),sizeof(ip));
	printf("%p\n\n\n",&x);
	printf("%p\n",p);

/*	printf("x=%d\n",x);
	printf("ch=%c\n",ch);
	printf("ip=%d\n",*ip);
	printf("cp=%d\n",*p);
	printf("size of ip=%ld\n",sizeof(ip));
	printf("size of cp=%ld\n",sizeof(p));

*/	return 0;
}
