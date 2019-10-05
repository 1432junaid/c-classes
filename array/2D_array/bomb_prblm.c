//WAP to check the bomb around the zero


#include<stdio.h>
void display(void);
int main(){
	int a[4][5]={{1,0,1,0,0},{0,0,1,0,0},{0,1,0,1,1},{1,0,1,0,0}};
	int count=0,m,n;
	display();
	 for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]==1){
				printf("*  ");
			}else{
				count=0;
					for(m=i-1;m<i+2;m++){
						for(n=j-1;n<j+2;n++){
							if(a[m][n]==1 && m>=0 && n>=0 &&n<5 && m<5)count++;
						}
					}
				printf("%d  ",count);
			}
		}
		printf("\n");
	}
	return 0;
}

void display(){
	printf("1  0  1  0  0\n");
	printf("0  0  1  0  0\n");
	printf("0  1  0  1  1\n");
	printf("1  0  1  0  0\n\n\n");
}
