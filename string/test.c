#include<stdio.h>
#include<string.h>
int main(){
	char str1[10] = "prep";
	printf("%s\tlen of str1=%ld\n",str1,strlen(str1));
	char str2[6] = "buddy";
	printf("%s\tlen of str2=%ld\n",str2,strlen(str2));
	strcat(str1,str2);
	char str3[10];
	str3[1] = str1[3];
	printf("%s\n",str3);
	printf("%ld\n",strlen(str1));
	return 0;
}
