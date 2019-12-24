#include<stdio.h>
#include<math.h>
#include<string.h>
int hex_to_dec(unsigned char *data){
	int sum=0;
	int length=strlen(data);
	int i=length-1;
	int j=0;
	while(i>=0){
		int x = data[i];
		if(x>=49 && x<=57)x=x-48;

		if(x==65){
			x = 10;
		}else if(x == 66){
			x = 11;
		}else if(x== 67){
			x= 12;
		}else if(x == 68){
			x=13;
		}else if(x == 69){
			x= 14;
		}else if(x == 70){
			x = 15;
		}
		sum =sum +x*pow(16,j);
		i--;
		j++;
	}
	return sum;
}

int main(){
	unsigned char a[10];
	printf("Enter a number\n");
	scanf("%s",a);
	int result = hex_to_dec(a);
	printf("\nhex_to_dec=%d\n",result);
	return 0;
}
