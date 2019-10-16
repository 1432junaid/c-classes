#include<stdio.h>
int main(){
int l,n; //length,no_of_photos,width,hieght
int i ;
printf("\t\t\t\t*******upload photo*********\n\n\n\n\n\n");
printf("Enter the lenght :\n");
scanf("%d",&l);
printf("Enter numbers of photos:\n");
scanf("%d",&n);
int w[n],h[n];
for(i=1;i<=n;i++){
	printf("Enter the width and hieght\n");
	scanf("%d%d",&w[i],&h[i]);
}

//logic **********************************
if((1<=n && n<=1000)  && (1<=l && l<=10000)) { // keep in mind as constraints
	for(i=1;i<=n;i++){

		if(h[i]<l || w[i]<l){
		printf("%d %d\t\t Upload another photo\n",w[i],h[i]); 
		}
		else if(h[i]==w[i]){
		printf("%d %d\t\t photo accpted\n",w[i],h[i]);
		}
		else{
		printf("%d %d\t\t Crope it\n",w[i],h[i]);
		}
	}
}
else{
	printf("flase resolution\n");
}

return 0;

}

