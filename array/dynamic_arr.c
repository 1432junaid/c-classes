#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int* create(int len){
	int* ar = (int*)calloc(len+1,sizeof(int));
	ar[len] = -1;
	return ar;
}

void add(int data,int** a,int index){
	if((*a)[index] == -1){
		*a = (int*)realloc(*a,index + 1);
	}
	(*a)[index] = data;
}

int main(){
	int* arr = create(1);
//	printf("1.\n");
	add(10,&arr,0);
//	printf("2.\n");
	add(20,&arr,1);
	add(30,&arr,2);
	add(40,&arr,3);
	printf("%d\t%d\t%d\t%d\n",arr[0],arr[1],arr[2],arr[3]);
	return 0;
}
