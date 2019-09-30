#include<string.h>
#include<stdio.h>
void array_values(char*);
int main(){
	char ar[] = "Lucknow";
	array_values(ar);
	return 0;
}

void array_values(char *a){
	int lenght = strlen(a);
//	int lenght=0;
	while(a[lenght++]!='\0');
	lenght=lenght-1;
	printf("%s\n",a);
}


