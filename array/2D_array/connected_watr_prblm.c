#include<stdio.h>
void display(void);
int main(){
	int a[4][5]={{0,0,1,2,0},{1,1,2,0,2},{1,0,1,0,1},{1,0,1,0,3}};
	int count,m,n;
	display();
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			if(a[i][j] != 0){
				printf("*  ");
			}else{
				count=0;
					for(m=i-1;m<i+1;m++){
						for(n=j-1;n<j+1;n++){
							if(a[i][j]!=0 && n>=0 && n<5 && m>0 && m<5)count++;
						}
					}
				printf("%d  ",count);
			}
		}printf("\n");
	}


	return 0;
}



void display(){
	printf("0  0  1  2  0\n");
	printf("1  1  2  0  2\n");
 	printf("1  0  1  0  1\n");
	printf("1  0  1  0  3\n\n\n");
}
