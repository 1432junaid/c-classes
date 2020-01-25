#include<stdio.h>
#include<stdlib.h>			//we have to include stdlib to use calloc
int main(){
	int size,i=0;
	printf("Enter the size of array\t:");
	scanf("%d",&size);
	int size1=size;
	int *p = (int*)calloc(sizeof(int),size);
	int data;
	while(size){
		printf("Enter data \n");
		scanf("%d",&data);
		p[i] = data;
		i++;
		size--;
	}
	for(int k=0;k<=size1;k++){
		printf("data = %d\t",p[k]);
		printf("\n");
	}

	return 0;
}
