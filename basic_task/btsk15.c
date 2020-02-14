//WAP to print fibbonachi upto nth term

#include<stdio.h>
void febbo(int,int,int);
int main(){
	int a = 1;
	int b = 1;
	febbo(a,b,10);
	return 0;
}

void febbo(int first,int second,int term){
	int next;
	int i=1;
	while(term){
		next = first + second;
		printf("%3d = %3d\n",i,first);
		first = second ;
		second = next;
		term--;
		i++;
	}
}
