#include<stdio.h>
int main(){
	int a[5];
	int i;
	int len=sizeof(a)/sizeof(a[0]);
	int l=sizeof(a);
	printf("size of a =%d",l);
//	for(i=0;i<len;i++){
//		a[i]=i+10;
//	printf("%d",a[i])
	printf("len=%d\n",len);
	return 0;
}
