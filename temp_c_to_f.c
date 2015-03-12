#include <stdio.h>
main()
{
  float celsius, farenheit;
  float upper, lower, cels;
  float step;

  step = 10.0;
  farenheit = 0.0;
  upper = 150.0;
  cels = 0.0;
   
  while( cels <= upper ){
       farenheit = (cels * 9.0)/5.0 + 32.0;
       printf("%3.2f\t %3.2f\n", cels, farenheit);
       cels = cels + step;
   }
}

