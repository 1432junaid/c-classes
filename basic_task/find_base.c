#include<stdio.h>
int base(int x){
	int count=1;
	while(x){
//		int count=1;
		x=x/10;
		count = count++;
	}
return count;

}


int main(){
	int y;
	y=base(123);
	printf("%d",y);
}
