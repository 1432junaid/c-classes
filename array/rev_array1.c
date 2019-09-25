// WAP to reverse the array
#include<stdio.h>
int main(){
	int i=0;
	int a[5]={2,5,7,9,15};
	int len = sizeof(a)/sizeof(a[0]);
	int j=len-1;
while(i<=j){
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;
}

for(i=0;i<len;i++){
	printf("%d ",a[i]);
}
printf("\n");

return 0;
} 
