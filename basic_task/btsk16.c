//WAP to determine a febbonichi series or not

#include<stdio.h>
int determine_febbo(int*,int);
int main(){
	int a[] = {1,1,2,3,5,18};
	int len = sizeof(a)/sizeof(a[0]);
	printf("len =%d\n\n",len);
	int result = determine_febbo(a,len);
	if(result == 0){
		printf("no this is not a febbonachi series\n");
	}else{
		printf("series is febbonichi\n");
	}
	return 0;
}

int determine_febbo(int *a,int len){
	int i=0;
	while(len-2){
		printf("%d\t%d = %d\n",a[i],a[i+1],a[i+2]);
		if(a[i]+a[i+1] != a[i+2])return  0;
		i++;
		len--;
	}
	return 1;
}
