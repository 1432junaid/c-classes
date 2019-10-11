#include<stdio.h>
int main(){

	struct student{
		char *name;
		int age;
		struct lcation{
			char *city;
			char *country;
		}loc;
	}st;

st.name="sariya";
st.age=12;
st.loc.city="lucknow";
st.loc.country="India";

printf("%s\n",st.loc.country);
return 0;
}
