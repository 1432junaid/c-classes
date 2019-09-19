//#define abc #include<stdio.h>
#define abc <stdio.h>
#include abc
#define add(x,y) x+y
int main(){
int a=add(2,3);
int b=sum(4,8);
printf("%d\t%d\n",a,b);
return 0;
}
int sum(int x,int y){
int z;
z=x+y;
return z;
}
