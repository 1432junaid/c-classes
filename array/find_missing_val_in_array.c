#include<stdio.h>
int main(){
	int a[]={6,4,2,3,1};
	int num=0;
	int r,i,j,sum=0;
	int len=sizeof(a)/sizeof(int);
	for(i=1;i<=6;i++){
		num +=i;
	}
	for(j=0;j<len;j++){
		sum+=a[j];
	}
r=num-sum;
printf("%d",r);
return  0;

}
