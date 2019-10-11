#include<stdio.h>
int main(){
	struct st{
		char * name1;
	};
	struct st data={"jd"};
	printf("%s\n",data.name1);

//	name1={"khalid"};           it give error
//	printf("%s\n",name.name1);

	data.name1="khalid";
	printf("%s\n",data.name1);
	return 0;
}
