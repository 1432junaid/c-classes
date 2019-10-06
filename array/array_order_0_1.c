#include<stdio.h>
int main(){
	int a[5]={0,1,0,1,0};
	printf("0 1 0 1 0\n");
	int len=sizeof(a)/sizeof(int);
	for(i=0;i<len-1;i++){
		if(a[i]==0){
			i++;
		}else{
		int t;
