#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	int y=power(a,b);
	printf("%d",y);
	return 0;

}


int power(int x,int y){
	if(y==1)return x;
	return x*power(x,y-1);
}

