



#include<stdio.h>
int main(){
	int a[4][5]={{1,0,1,0,0},{0,0,1,0,0},{0,1,0,1,1},{1,0,1,0,0}};
	int count=0,m,n;
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]==1){
				printf("*  ");
			}else{
				count=0;
					for(m=i-1;m<i+2;m++){
						for(n=j-1;n=j+1;j++){
							if(a[m][n]==1 && m>=0 && n>=0 && m<5 && n<5)count++;
						}
					}
				printf("%d  ",count);
			}
		}
		printf("\n");
	}
	return 0;
}
