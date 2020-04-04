#include<stdio.h>
int main(){
	int a[]={5,6,7,10,15,8,14,3};
	int max=a[0];
	int smax=a[0];
	int i;
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		if(a[i]>max){
			smax=max;
			max=a[i];
		}else if(a[i]>smax){
			smax=a[i];
		}
	}
	printf("max = %d \n",max);
	printf("smax=%d \n",smax);
	return 0;
}
