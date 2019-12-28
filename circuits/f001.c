#include<stdio.h>

unsigned int sop(int x, int y, int z){
	int c1 = (!x)&(!y)&z;
	int c2 = (!x)&y&(!z);
	int c3 = x&(!y)&(!z);
	int c4 = x&y&z;
	int r =(c1|c2|c3|c4);
	return r;
}

unsigned int pos(int l, int m, int n){
	int s1 = l | m | n;
	int s2 = l | (!m) | (!n);
	int s3 = (!l) | m | (!n);
	int s4 = (!l) | (!m) | n;
	int r1 = (s1 & s2 & s3 & s4);
	return r1;
}


int  main(){
	unsigned int a,b,c;
	printf("Enter three number either 0 or 1\n");
	scanf("%d%d%d",&a,&b,&c);

	int result = sop(a,b,c);
	printf("result sop = %d\n",result);

	int result2 = pos(a,b,c);
	printf("result pos = %d\n",result2);

	return 0;
}
