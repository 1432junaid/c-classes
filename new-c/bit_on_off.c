#include<stdio.h>

int on_lsb(unsigned int x){
	return x=x|1;
}

int off_lsb(unsigned int y){
	int c = y;
	c >> 1;
	c << 1;
	return y = y & c;
}
int main(){
	int x;
	printf("Enter a number ");
	scanf("%d",&x);

	int result = on_lsb(x);
	printf("after on lsb = %d\n",result);


	int result1 = off_lsb(x);
	printf("after off lsb = %d\n",result1);

	return 0;
}
