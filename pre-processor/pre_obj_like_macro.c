#include<stdio.h>
int main(){
printf("%s\n",__FILE__);
printf("%s\n",__TIME__);
printf("%s\n",__DATE__);
printf("%d\n",__LINE__);
printf("%ld\n",__STDC_VERSION__);
printf("%d\n",__STDC__);
// __STDC__     it will give 1  if compiler  is Iso combitable other wise 0  ex: gcc shows 1 and turbo 0
return 0;
}
