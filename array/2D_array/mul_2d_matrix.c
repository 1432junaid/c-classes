#include<stdio.h>
int main(){
	int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{11,22,33}};
	int b[3][3]={{2,4,6},{1,3,5},{23,45,56}};
	int c[4][3];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				c[i][j] += a[j][k]*b[k][j];
			}printf("%d\t",c[i][j]);
		}printf("\n");
	}


	for(int l=0;l<4;l++){
		for(int m=0;m<3;m++){
			printf("%d\t",a[l][m]);
		}printf("\n");
	}

//	for(int p=0;p<3;p++){
//		printf("%d",c);
//	}

	return 0;
}
