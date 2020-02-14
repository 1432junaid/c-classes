// WAP to reverse an array

#include<stdio.h>
void rev_arr(int *,int );
void display(int *,int );
int main(){
	int a[]={1,2,3,4,5};;
	int len = sizeof(a)/sizeof(a[0]);

	printf("len of array=%d\n\n",len);
	display(a,len);
	rev_arr(a,len);
	display(a,len);
	return 0;
}

void rev_arr(int *a,int len){
	for(int i=0;i<len;i++){
		for(int j=len-1; i<=j; j--){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}

void display(int *a,int len){
	for(int i=0;i<len;i++){
		printf("%d   ",a[i]);
//		i++;
	}
	printf("\n");
}
