#include<stdio.h>
#include<string.h>
int match_str(char*,char*);


int match_str(char*str,char*substr){
	int lstr = strlen(str);
	int lsub = strlen(substr);
	int count= 0;
	int i,j;
	for(i=0;i<=(lstr-lsub);i++){
		if(str[i]==substr[0]){
			for(j=1;j<lsub;j++){
				if(str[i+j]!=substr[j])break;
			}
			if(j==lsub){
				count++;
				printf("%s\n",substr);
			}
		}
	}
	return count;
}

//void rev(int )

int main(){
//	char a[]="lucknow is lucky for me";
//	char b[]="luck";
	char a[23];
	char b[5];
	printf("Enter a string\n");
	scanf("%[^\n]s",a);
//	scanf("\n");
	printf("Enter sub-string\n");
	scanf("%[^\n]s",b);

	int fun = match_str(a,b);
	printf("%d\n",fun);
	return 0;
}
