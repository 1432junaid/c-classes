#include<stdio.h>
int string_len(int *string){
	int i=0;
	for(int j=0;*s != '\0'; s++){
		i++;
		return i;
	}
}

int main(){
	int string = "this is string";
	int result = string_len(&string);
	printf("len =%d",result);
	return 0;
}
