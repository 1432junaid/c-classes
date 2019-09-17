#include<stdio.h>
void printer();
void painter();
static int x=10;
int main(){
printer();
painter();
return 0;
}

void printer(){
static int y=20;
printf("%d\t%d\n",x,y);
}

void painter(){
printf("%d\t%d\n",x,y);  //m
}
