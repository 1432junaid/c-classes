#include<stdio.h>
int add(int , int );
int sub(int , int );
//int 


int main(){
	int (*fp)(int ,int );   		//pointer to function 
	fp = &add;			      //if we remove & then it remain same coz fun name also a address
	int k=fp(5,7);
	printf("%d\n",k);

	fp = &sub;
	int n=fp(9,4);
	printf("%d\n",n);

	return 0;
}


int add(int x,int y){
	return x+y;
}

int sub(int x,int y){
	return x-y;
}
