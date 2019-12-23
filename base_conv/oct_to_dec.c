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


void hex_to_dec(unsigned int hex){
	int sum=0;
	char a;
	int  i=0;
	while(hex){
		sum=sum+(hex%10)*pow(16,i);
		hex=hex/10;
		i++;
	}
	return sum;
	switch(a){
		case A:
		return  10;
		break;
	}



}

int main(){

	unsigned int oct;
	printf("Enter an octal number\n");
	scanf("%d",&oct);

//	int result = oct_to_dec(oct);
//	printf("\n\noct=%o\n",result);

	int r2 = hex_to_dec(oct);
	printf("hex=%x",r2);
	return 0;
}
