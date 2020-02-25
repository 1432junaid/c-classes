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
//		printf("%c\n",c);
		rev();
		printf("%c",c);
	}
}

