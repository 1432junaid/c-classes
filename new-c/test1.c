#include<stdio.h>
int main(){
	int a[30];
	int j;
	printf("Enter any number\n");
	scanf("%d",&j);
	for(int i=0;j<=0;i++){
		a[i] = j%10;
		j = j/10;
	}
	for(i=i-1;i>=0;i--)
	printf("%d\n",i);
	return 0;
}
