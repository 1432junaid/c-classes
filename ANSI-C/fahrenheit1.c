
/* Print fahrenheit-celsius table
  for fahr = 0, 20, .... ,300 */

#include<stdio.h>
main(){
        float fahr, celsius;
        int lower,upper,step;
        lower =0;               //lower limit of temperature table
        upper =300;             //upper limit
        step = 20;              //step size

        fahr = lower;
        while(fahr <= upper){
                celsius = 5 *(fahr-32)/9;
                printf("%6.0f\t%6.2f\n",fahr,celsius);
                fahr = fahr + step;
        }
}

