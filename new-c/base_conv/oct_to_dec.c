#include<stdio.h>
#include<math.h>


int oct_to_dec(unsigned int data){
	int sum=0,i=0;
	while(data){
		int c=data%10;
		if(c>=8){
			printf("please input octal number");
			return 0;
		}else{

		sum=sum+(data%10)*pow(8,i);
		data=data/10;
		i++;
		}
	}
	return sum;

}



int main(){

	unsigned int oct;
	printf("Enter an octal number\n");
	scanf("%d",&oct);

	int result = oct_to_dec(oct);
	printf("oct to decimal=%d\n",result);
	return 0;
}
