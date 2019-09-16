#include<stdio.h>
int main(){
int a,rev=0;
printf("\n\n\t\t\t*****Reverse the number******\n\n\n\n\n");
printf("Enter number \n");
scanf("%d",&a);
while(a<0){
	 rev=rev*10 + a%10;
	 a=a/10;
}
printf("%d",rev);
return 0;
}

