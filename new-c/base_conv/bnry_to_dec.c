#include<stdio.h>
#include<math.h>

int bnry_to_dec(unsigned int data){
	int sum=0;
	int i=0;
	while(data){
		int c = data % 10;
		if(c>1){
			printf("\nEnter only 0 and 1\n");
		}
		sum = sum + (data % 10) * pow(2,i);
		data = data / 10;
		i++;
	}
	return sum;
}



int main(){
	unsigned int x;
	printf("Enter binary number\n");
	scanf("%d",&x);
	int result = bnry_to_dec(x);
	printf("binary to  dec=%d\n",result);
	return 0;
}

