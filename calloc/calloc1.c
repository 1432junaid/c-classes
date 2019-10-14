#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p =(int*)calloc(sizeof(int),5);
	for(int i=0;i<5;i++){
		p[i]=i+2;
	}
	for(int k=0;k<5;k++){
		printf("%d\n",p[k]);
	}
return 0;
}
