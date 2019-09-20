// WAP to check a loop year
#include<stdio.h>
int main(){
	int x,y;
	printf("Enter a year\n");
	scanf("%d",&y);
	if(y%4==0 && y%400==0){
		printf("this is leap year");
	}else{
		printf("this is not a leap year");
	}
	return 0;
}
