 #include<stdio.h>
//  #include<string.h>
int main(){
	char name[]="Integral University";
	printf("%d\n",stringLen(name));              //replace fun_name to strlen it is predefine fun in string.h w can use to find the
							// lenght of string
	return 0;
}






int stringLen(char *string){
		int len=-1;
		while(string[++len]!='\0');
		return len;
}
