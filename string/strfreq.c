#include<stdio.h>
#include<string.h>
int main(){
	char name[]="Integral University";
	int i,j,count,len=strlen(name);
	for(i=0;i<len;i++){
		count=0;
		for(j=0;j<len;j++){
			if(name[i]==name[j]){
				if(j<i || name[i]==' ') goto ab;
					count++;
			}
		}
	printf("%c \t=%d\n",name[i],count);
	ab:;
	}
	return 0;
}
