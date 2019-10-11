#include<stdio.h>
int main(){
	struct protocol{
		unsigned int spn:16;
		unsigned int dpn:16;
		unsigned int flag:2;
	}udp;

	udp.flag=2;
	printf("%d\n",udp.flag);
	udp.flag=5;
	printf("%d\n",udp.flag);
	return 0;
}
