#include<stdio.h>
int main(){

	union node{
		char * name;
		int age;
	}u;

	u.name="junaid";
	//u.age=21;
	//printf("%d\n",u.age);
	printf("%s\n",u.name);
	printf("%ld\n",(long)sizeof(u));
	return 0;
}
