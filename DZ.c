#include <stdio.h>

int main ()
{
  int i=0;
  
  double dat[]={4, 1, 8, -4.12, 5.05, 3.57, 3, 2};
  
  double max=dat[i], min=dat[i];

  while (i<=6) {
  	
  	if (dat[i+1] > max)
    	max = dat[i+1];
  	if (dat[i+1] < min)
    	min = dat[i+1];
  	
    i=i+1;
       }
       
   printf ("max=%f\nmin=%f",max,min);

  return 0;
}
