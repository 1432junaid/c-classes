#include<stdio.h>
#include<string.h>
int stringLen(char*);
int main(){
	char name[]="Integral University";
	printf("%d\n",stringLen(name));              	// strlen it is predefine fun in string.h w can use to find the
	printf("%ld\n",strlen(name));			// lenght of string
	return 0;
}






int stringLen(char *string){
		int len=-1;
		while(string[++len]!='\0');
		return len;
}
