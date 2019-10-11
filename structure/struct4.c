#include<stdio.h>
int main(){
	struct st{
		char gender;
		char *name;
		int age;
//		char  gender;
	}*p,x;

	p=&x;

	x.name="khalid";
	x.age=21;
	printf("%s\t",p->name);
	printf("%d\n",p->age);
	printf("%ld\n",(long)sizeof(struct st));
	return 0;
}
