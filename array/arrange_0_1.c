//arrrange the order of 0 and 1 in an array


#include<stdio.h>
int main(){
	int a[]={0,1,1,1,0,0,1,0,1};
	int len=sizeof(a)/sizeof(int),i,sum,j;
	for(i=0;i<len;i++){
		sum=sum+a[i];
	}
	int limit=len-sum;
	for(j=0;j<len;j++){
		if(j<limit){
			a[j]=0;
		}else{
		a[j]=1;
		}
	printf("%d",a[j]);
	}

	
	return 0;
}
