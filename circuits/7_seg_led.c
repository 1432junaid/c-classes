#include<stdio.h>




unsigned int f0(unsigned int a,unsigned int b,unsigned int  c,unsigned int d){
	int m0 = (!a)&(!b)&(!c)&(!d);
	int m2 = (!a)&(!b)&c&(!d);
	int m3 = (!a)&(!b)&(c)&(d);
	int m5 = (!a)&(b)&(!c)&(d);
	int m6 = (!a)&(b)&(c)&(!d);
	int m7 = (!a)&(b)&(c)&(d);
	int m8 = (a)&(!b)&(!c)&(!d);
	int m9 = (a)&(!b)&(!c)&(d);
	int result0 = (m0|m2|m3||m5|m6|m7|m8|m9);
	return result0;

}


unsigned int f1(unsigned int a,unsigned int b,unsigned int  c,unsigned int d){
	int m0 = (!a)&(!b)&(!c)&(!d);
	int m5 = (!a)&(b)&(!c)&(d);
	int m4 = (!a)&(b)&(!c)&(!d);
	int m6 = (!a)&(b)&(c)&(!d);
	int m8 = (a)&(!b)&(!c)&(!d);
	int m9 = (a)&(!b)&(!c)&(d);
	int result1 = (m0|m5|m4|m6|m8|m9);
	return result1;

}

unsigned int f2(unsigned int a,unsigned int b,unsigned int  c,unsigned int d){
	int m0 = (!a)&(!b)&(!c)&(!d);
	int m2 = (!a)&(!b)&(c)&(!d);
	int m3 = (!a)&(!b)&(c)&(d);
	int m4 = (!a)&(b)&(!c)&(!d);
	int m7 = (!a)&(b)&(c)&(d);
	int m8 = (a)&(!b)&(!c)&(!d);
	int m9 = (a)&(!b)&(!c)&(d);
	int result2 = (m0|m2|m3|m4|m7|m8|m9);
	return result2;

}

unsigned int f3(unsigned int a,unsigned int b,unsigned int  c,unsigned int d){
	int m0 = (!a)&(!b)&(!c)&(!d);
	int m2 = (!a)&(!b)&(c)&(!d);
	int m3 = (!a)&(!b)&(c)&(d);
	int m4 = (!a)&(b)&(!c)&(!d);
	int m5 = (!a)&(b)&(!c)&(d);
	int m6 = (!a)&(b)&(c)&(!d);
	int m8 = (a)&(!b)&(!c)&(!d);
	int m9 = (a)&(!b)&(!c)&(d);
	int result3 = (m0|m2|m3|m4|m5|m6|m8|m9);
	return result3;


}
unsigned int f4(unsigned int a,unsigned int b,unsigned int  c,unsigned int d){
	int m0 = (!a)&(!b)&(!c)&(!d);
	int m2 = (!a)&(!b)&(c)&(!d);
	int m8 = (a)&(!b)&(!c)&(!d);
	int m6 = (!a)&(b)&(c)&(!d);
	int result4 = (m0|m2|m8|m6);

}
unsigned int f5(unsigned int a,unsigned int b,unsigned int  c,unsigned int d){
	int m0 = (!a)&(b)&(c)&(!d);
	int m1 = (!a)&(!b)&(!c)&(d);
	int m3 = (!a)&(b)&(c)&(!d);
	int m4 = (!a)&(b)&(c)&(!d);
	int m5 = (!a)&(b)&(c)&(!d);
	int m6 = (!a)&(b)&(c)&(!d);
	int m7 = (!a)&(b)&(c)&(!d);
	int m8 = (!a)&(b)&(c)&(!d);
	int m9 = (!a)&(b)&(c)&(!d);
	int result5 =(m0|m1|m3|m4|m5|m6|m7|m8|m9);
	return result5;

}
unsigned int f6(unsigned int a,unsigned int b,unsigned int  c,unsigned int d){
	int m0 = (!a)&(!b)&(!c)&(!d);
	int m2 = (!a)&(!b)&(c)&(!d);
	int m3 = (!a)&(!b)&(c)&(d);
	int m5 = (!a)&(b)&(!c)&(d);
	int m6 = (!a)&(b)&(c)&(!d);
	int m8 = (a)&(!b)&(!c)&(!d);
	int m9 = (a)&(!b)&(!c)&(d);
	int result6 = (m0|m2|m3|m5|m6|m8|m9);
	return result6;
}

/*void test(unsigned int a,unsigned int b,unsigned int c,unsigned int d){
	printf(">>>>>>>>>>>>>   Testing   >>>>>>>");
	printf("f0 =%d\n",f0());
	printf("f1 =%d\n",f1());
	printf("f2 =%d\n",f2());
	printf("f3 =%d\n",f3());
	printf("f4 =%d\n",f4());
	printf("f5 =%d\n",f5());
	printf("f6 =%d\n",f6());
}*/



/*
	#	 ####	####	#    #	 #### 	 ####	####	 ####	 ####
	#	     #	    #	#    #	#	#	    #	#    #	#    #
	#	 ####	####	 #### 	 ####	 ####	    # 	 ####	 ####
	#	#	    #	     #	     #	#    #	    #	#    #	     #
	#	 ####	####	     #	 ####	 ####	    #	 ####	 ####
*/

void d1(){
	printf("\t #######\n");
}

void d2(){
	printf("\t#\n\t#\n");
}

void d3(){
	printf("\t\t#\n\t\t#\n");
}
void d4(){
	printf("\t#\t#\n\t#\t#\n");
}



int main(){
	unsigned int a,b,c,d;
//	printf("Enter binary codes:\n");
//	scanf("%d%d%d%d",&a,&b,&c,&d);

	int rf0 = f0(a,b,c,d);
	int rf1 = f0(a,b,c,d);
	int rf2 = f0(a,b,c,d);
	int rf3 = f0(a,b,c,d);
	int rf4 = f0(a,b,c,d);
	int rf5 = f0(a,b,c,d);
	int rf6 = f0(a,b,c,d);

	d1();
//	d2();
	d4();
	d4();
//	d3();
	d1();



	return 0;
}
