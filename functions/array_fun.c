#include<stdio.h>
void array_values(int *a,int);
int main(){
	int ar[]={2,5,7,9,15,18};
	int lenght=sizeof(ar)/sizeof(ar[0]);
	array_values(ar,lenght);
	return 0;
}

void array_values(int* a,int lenght){
//	int lenght=sizeof(a)/sizeof(int);
	for(int i=0;i<lenght;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
