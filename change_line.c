#include<stdio.h>
#define AGE 20
int main(){
	int x=40;
	printf("%d\n",x);
	printf("%d\n",__LINE__);

	#line 20
	#if __STDC__
		#include<unistd.h>
		printf("hi");
	#else
		#include<conio.h>
		printf("hello");
	#endif
	printf("%d\n",__LINE__);
	return 0;
}
