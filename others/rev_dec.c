#include<stdio.h>
int main(){
int a,rev=0;
int t=0;
printf("\n\n\t\t\t*****Reverse the number******\n\n\n\n\n");
printf("Enter number \n");
scanf("%d",&a);
//t=a;
//b=t;
//a=b;
t=a;
while(a!=0){     //OR while(a)   while 0 is false try it 
	 rev=rev*10 + a%10;
	 a=a/10;
}
printf("%d",rev);

if(t == rev){
	printf("it is palendrome\n");
}

else{
	printf("it is not palindrome\n");
}
return 0;
}

