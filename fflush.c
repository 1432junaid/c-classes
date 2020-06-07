#include<stdio.h>
#include<stdlib.h>

int main(){
	char a,b;
	printf("enter two char :\n");
	scanf("%c",&a);
	int f = fflush(stdin);
	scanf("%c",&b);
	printf("a=%d \t b=%d\n",a,b);
	printf("%d\n",f);
	return 1;
}
