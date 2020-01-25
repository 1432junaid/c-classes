#include<stdio.h>

void str_cpy1(char *s,char *t){
	int i;
	i=0;
	while((s[i] = t[i]) !='\0')
	i++;

}

int str_cmp2(char *s,char *t){
	for(;*s == *t; s++,t++)
		if(*s == '\0')
		return 0;
	return *s - *t;
}


int main(){
	printf("this is string copy function\n");
	char t[] = "junaid";
	char s[] = "ansari";
	str_cpy1(&s,&t);
	int i=0;
	while(s != '\0'){
		printf("%c",t[i]);
		i++;
	}
	return 0;
}

