#include<stdio.h>
int *months_name(int x){
	char *name[] = {"illegal month",
			"january","feb","march","April","may","june","june","july","aug","sep","oct","nov","dec"};
	return (x<1 || x>12) ? name[0] : name[x];
}
int main(){
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	printf("%ls\n",months_name(x));

}
