#include<stdio.h>
int main(){
	struct k1{
		char *name;
		int age;
	}*p,x;

	p=&x;
	x.name="Khalid";
	x.age=21;
	printf("%s\t",p->name);
	printf("%d\n",p->age);
	printf("%s\t",x.name);
	printf("%d\n",x.age);

	return 0;
}
