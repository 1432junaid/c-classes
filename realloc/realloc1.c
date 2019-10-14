#include<stdio.h>
#include<stdlib.h>
int main(){
	struct student{
		char *name;
		int age;
	}*p;

	struct istu{
		char *name;
		int age;
		char gender;
	}*q;

	p=malloc(sizeof(struct student));
	p->name="hamid";
	p->age=55;
	q=realloc(p,sizeof(struct istu));
	free(q);
	q=NULL;
	printf("q.name=%s\n",q->name);
	printf("q.age=%d\n",q->age);
	return 0;
}
