#include<stdio.h>

int bit_on(unsigned int x){
	return x = (x | (x + 1));
}

int bit_off(unsigned int y){
	return y = (y & (y - 1));
}

int main(){
	unsigned int a;
	printf("Enter a number\n");
	scanf("%d",&a);

	int result = bit_on(a);			//on first 0 form LSB side
	printf("bit on =%d\n",result);


	int result2 = bit_off(a);		//off first 1 from LSB side
	printf("bit off =%d\n",result2);

	return 0;
}
