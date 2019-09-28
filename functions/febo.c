#include<stdio.h>
int febo(int);
int main(){
	int n;
	int i,j;
//	printf("Enter a number\n");
//	scanf("%d",&n);
//	int z=febo(n);
//	printf("%d\n",z);
//	printf("Enter the lenght of series\n");
//	scanf("%d",)
	for(i=1;i<=10;i++){
		j=febo(i);
		printf("%d\n",j);
	}
}

int febo(int n){
	if(n==1 || n==2)return 1;
	int p=febo(n-2)+febo(n-1);
	return p;
}
