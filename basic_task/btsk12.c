#include<stdio.h>
int main(){
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	for(int i=2;i<a-1;i++){
		if(a%i==0){
			printf("this is not a prime number\n");
			return 1;
		}
	}printf("%d=is a prime number\n",a);
return 0;
}
