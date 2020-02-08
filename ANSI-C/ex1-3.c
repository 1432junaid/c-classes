#include<stdio.h>
int main(){
	printf("\n\tfahrenheit - celcius table\n\n\n");
	float fahr,cels;
	int upper = 300;
	int lower = 0;
	int steps = 20;
	fahr = lower;
	while(fahr <= upper){
		cels = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%3.2f\n",fahr,cels);
		fahr += steps;
	}
	printf("%c\n",fahr);
	return 0;
}
