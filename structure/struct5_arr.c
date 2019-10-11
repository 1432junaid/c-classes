#include<stdio.h>
int main(){


struct student{
	char *name;
	int age;
	char gender;
}sa[2]={{"kahlid",21},{"zafar",34}};

printf("%s\n",sa[1].name);
printf("%s\n",sa[0].name);
return 0;
}
