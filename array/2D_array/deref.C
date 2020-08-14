#include<stdio.h>
int main(){
	int ar[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	printf("%d\n",*(*ar));
	printf("%d\n",*(*(ar+1)+2));
	printf("%d\n",*(*(ar+2)+3));
	printf("%d\n",*(*(ar+3)));
	return 0;
}

