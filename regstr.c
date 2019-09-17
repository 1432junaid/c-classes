#include<stdio.h>
int main(){
register int x=20;

printf("%d\n",x);
int *p = &x;
return 0;
}
