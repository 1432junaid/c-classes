#include<stdio.h>
#include<stdlib.h>
int main(int argc,char * argv[]){
	if(argc<=1){
		printf("argument not passed\n");
		return 0;
	}
//	for(int i=1;i<argc;i++){
		//while
//		printf("%d\n",atoi(argv[i])); //for string_to_int
		printf("%c\n",*argv[i]);    //character
		
	}
	return 0;
}
