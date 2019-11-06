#include<stdio.h>
int main(){
	struct student{char name[20];int age;} mohan = {"junaid",21};
// compare with int x=11; 
	printf("%s\t",mohan.name);
	printf("%d\n",mohan.age);
	return 0;
}

