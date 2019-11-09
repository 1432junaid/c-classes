#include<stdio.h>
#include<string.h>
void split(char*,char*);


int main(){
	char path[100]="/bin/:sbin/:/usr/include/";
	split(path,":");
	return 0;
}

void split(char *str,char *e){
	int len =strlen(str);
	int  i=0,p=0,q=0;
	for(q=0;q<=len;q++){
		if(str[q]==':' || str[q]=='\0'){
			while(p<q){
				printf("%c",str[p]);
				p++;
			}
			p=q+1;
			printf("\n");
		}
	}
}
