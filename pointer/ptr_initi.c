#include<stdio.h>
/*
int main(){
	int x=10;
	char a=50;
	float f=4.80f;
	double d=809.234;

	int *px = &x;
	char *pc =&a;
	float *pf = &f;
	double *pd = &d;

	printf("int \t%d\n",px);
	printf("char \t%d\n",pc);
	printf("float \t%f\n",pf);
	printf("double \t%fd\n",pd);

	return 0;
}
*/

int main(){
	int x = 1;
	int y = 2;
	int z[10];
//	printf("%ld",sizeof(z));		//size of array
//	printf("%ld",sizeof(x));		//size of int
	int *px;
	px = &x;
	int *py = &y;
	printf("pointer x%d\tx=%d\n",px,x);
	printf("pointer y%d\ty=%d\n",py,y);
	*px = 10;
	printf("x = %d\n",x);
	px = &z[0];
	printf("poniter px%d\n",z[0]);
	return 0;

}
