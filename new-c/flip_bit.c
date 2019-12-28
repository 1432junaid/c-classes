#include<stdio.h>

void dec_to_bnry(unsigned int a){
	int b[30];
	int i=0;

	int len=sizeof(b)/sizeof(int);

	for(i=0;a>0;i++){				//convert the dec to binary
		b[i] = a % 2;
		a = a / 2;
	}

	for(int j=i-1; j>=0;j--){			//print the array in reverse form
		printf("%d",b[j]);
	}
	printf("\n");
//	printf("arranging array");

	for(int k=0;k<=len;k++){			//reversing the array
		for(int m=i-1;m<k;m--){
			int temp = b[k];
			b[k] = b[m];
			b[m] = temp;
		}
	}

	printf("reverse the array\n");
	for(int l=0;l>=0;l++){
		printf("%d",b[l]);
	}
	printf("\n");


}

int main(){
	unsigned int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	dec_to_bnry(x);
	return 0;
}
