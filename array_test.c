#include <stdio.h>

int main()
{
int i,a;
int mytest[10];

for(i=0; i < 9; i++)
  {
   mytest[i] = 0; 
  }


printf("%d\n", mytest[0]);

++mytest[0];

printf("%d\n", mytest[0]);

++mytest[0];

printf("%d\n", mytest[0]);


}
