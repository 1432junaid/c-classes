#include<stdio.h>
int main(){
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if((a & 1)==0){
		printf("even\n");
	}else{
		printf("odd");
	}
return 0;
}
