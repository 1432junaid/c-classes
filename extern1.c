#include<stdio.h>
void printer();
char *name="manish";
extern int age;
int main(){
printf("%s\n",name);
printf("%d\n",age);
printer();
return 0;
}
