#include<stdio.h>
int main(){
	printf("Enter a sentence \n");
	rev();
	return 0;
}
void rev(){
	char c;
	scanf("%c",&c);
	if(c != '\n'){
		rev();
		printf("%c",c);
	}
}

