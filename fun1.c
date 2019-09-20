#include<stdio.h>
void printer();
int main(){
printer();
printer();
printer();
printer();
return 0;
}
void printer(){
int y=20;
static int x;
x=y;
printf("%d\n",x);
x++;
}
