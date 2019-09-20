//WAP to check even  odd
int bit();
#include<stdio.h>
int main(){
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	if(x%2==0){
		printf("%d is even mumber\n",x);
	}else{
		printf("%d is Odd number\n",x);
	}
bit();
return 0;
}
//check  even odd using bit operator
int bit(){
	int y;
	printf("Enter a number \n");
	scanf("%d",&y);
	if(y&1==1){
		printf("%d is odd ",y);
	}else{
		printf("%d is even ",y);
	}
return 0;
}

