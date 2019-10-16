#include<stdio.h>
int main(){
	int a,temp=0,p;
	printf("Enter a number\n");
	scanf("%d",&a);
	p=a;
	while(a){
		temp=temp*10+a%10;
		a=a/10;
	}
	if(p==temp){
		printf("number is palindrome\n");
	}else{
		printf("number is not palindrome\n");
	}
return 0;
}
