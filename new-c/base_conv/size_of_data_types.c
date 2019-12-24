#include<stdio.h>

int main(){
	short int	a=10;
	long int l=123456789l;
	float 	b=23.5f;
	char 	c='9';
	double	d=756;

	printf("\nsize of int 		=%ld\n",sizeof(int));
	printf("size of short int	 =%ld\n",sizeof(a));
	printf("size of long int 	=%ld\n",sizeof(l));
	printf("size of float	 	=%ld\n",sizeof(b));
	printf("size of char		=%ld\n",sizeof(c));
	printf("size of double		=%ld\n",sizeof(d));

	return 0;

}
