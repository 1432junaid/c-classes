#include<stdio.h>
int main(){
	int a[]={5,-2,-7,10,15,-8,14,3};
	int i=0;
	int len=sizeof(a)/sizeof(int);
	int j=len-1;

//	for(i=0;i<len;i++){
//		for(j=len;j<i;j--){
//				if(a[i]<0 && a[j]>0){
//					int temp;
//					temp = a[i];
//					a[j] = a[i];
//					a[j] = temp;
//				}
//		}
//	}
//	printf("%d\n",a[i]);	

	while(i<j){
		while(a[i]<0)i++;
		while(a[j]>0)j--;
		if(i<j){
			int temp =a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
for(i=0;i<len;i++){
	printf("%d ",a[i]);
}
printf("\n");
return 0;
}
