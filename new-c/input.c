#include<stdio.h>
int main(){
	int x = 15;
	int y = 015;
	int z = 0x15;
	printf("%d \t %d \t %d \n\n",x,y,z);
	printf("%d \t %o \t %X \n",x,y,z);
	return 0;
}
