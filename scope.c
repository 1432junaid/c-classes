#include<stdio.h>
int x;
void printer(){
        int x=10;
        static int y = x;
        y++;
 //       cout<<x<<" " <<y<<endl;
	printf("%d\t%d\n",x,y);
}
int main(){
        printer();
        printer();
        printer();
        return 0;
}


