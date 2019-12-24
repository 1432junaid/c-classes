#include<stdio.h>
int main(){
	int x = 15;
	int y = 015;
	int z = 0x15;
	printf("x y z in decimals\n");
	printf("%d \t %d \t %d \n\n",x,y,z);
	printf("x y z in dec oct hex\n");
	printf("%d \t %o \t %X \n",x,y,z);
	return 0;
}
