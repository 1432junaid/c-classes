#include<stdio.h>
int main(){
int i,j;
for(i=0;i<=5;i++){
	if(i==0){
		for(j=0;j<=5;j++){
		printf("* ");
		}
	}
	else{
	for(j=5;j<=i;j--){
	printf(" *");
	}
}
printf("\n");
}
return 0;
}
