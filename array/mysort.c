#include<stdio.h>
int main(){
	printf("Enter numbers\n");
	int a[5];
	int len = sizeof(a)/sizeof(int);
	for(int i=0; i<len-1; i++){
		scanf("%d",a[i]);
	}
	printf("your array\n");
//	for(int j=i)
	printf("%d",a);
	return 0;
}
