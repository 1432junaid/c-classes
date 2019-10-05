#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{11,22,33},{44,55,66},{77,88,99}};
	int c[3][3];
	int i,j;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=(a[i][j] + b[i][j]);
		}
	}

	for(int k=0;k<3;k++){
		for(int p=0;p<3;p++){
			printf("%d\t",c[k][p]);
		}printf("\n");
	}
	return 0;
}
