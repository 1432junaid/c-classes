#include<stdio.h>
void asc(int*,int );
void desc(int*,int );
void display(int*,int);
void sort(int* , int ,void (*fp)(int*,int));





int main(){
	int a[5]={45,23,87,12,56};
	int len=sizeof(a)/sizeof(int);
//	asc(a,len);
	sort(a,len,asc);
	display(a,len);
	sort(a,len,desc);
//	desc(a,len);
	display(a,len);
	return 0;
}


void asc(int *a,int len){
	int i,j,min;
	for(i=0;i<len-1;i++){
		min=i;
		for(j=i+1;j<len;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}


void desc(int *a, int len){
	int max,i,j;
	for(i=0;i<len-1;i++){
		max=i;
		for(j=i+1;j<len;j++){
			if(a[j]>a[max]){
				max=j;
			}
		}
		int temp = a[i];
		a[i] = a[max];
		a[max] = temp;
	}
}


void display(int *a,int len){
	for(int i=0;i<len;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");
}


void sort(int *a,int len,void (*fp)(int *a,int len)){
	fp(a,len);
}
