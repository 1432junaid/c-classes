#include<stdio.h>
void display(void);
int old(void);
//int sur(int,int,int);
int main(){
	int a[4][5]={	{0,0,1,2,0},
			{1,1,2,0,2},
			{1,0,1,0,1},
			{1,0,1,0,3}};


	display();
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			if(a[i][j] == 0){
				sur(a[i][j],i,j);
			}
		}
	}
return 0;
}

void display(){
	printf("0  0  1  2  0\n");
	printf("1  1  2  0  2\n");
 	printf("1  0  1  0  1\n");
	printf("1  0  1  0  3\n\n\n");
}


int sur(int a[][],int i ,int j){
	int count=0;
	if (a[i][j]==0){
		count++;
		for(int x=i-1;x<i+2;i++){
			for(int y=j-1;y<y+2;i++){
				if(a[x][y]==0){
					count++;
					count=count+sur(a[x][y],x,y);
				}
			}
		}
	}
	return count;
}
