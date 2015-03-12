#include <stdio.h>

int main()
{
 
int c,n,b,t;
n=0;
b=0;
t=0;

  while((c = getchar()) != EOF){
    if(c == '\n')
    {
      ++n;
      printf("there are %d newlines, %d blanks and %d tabs\n", n,b,t);
    };
   
    if(c == ' ')
    {
      ++b;
    };

    if(c == '\t')
    {
      ++t;
    };
  
  };
}
 
