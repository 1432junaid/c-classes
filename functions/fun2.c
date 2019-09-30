#include<stdio.h>
int add(int ,int);
int main(){
	int x=10,y=20;
	int z=add(x,y);
	printf("%d\n",z);
	return 0;
}

int add(int a,int b){  //we can use int,void or anythign but it can't get eror
	int c=a+b;
	int d=a+10;
	return d,c;	//it is write coz return assign c
}
