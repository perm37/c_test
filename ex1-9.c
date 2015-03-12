#include <stdio.h>

int main()
{
int c,bs;
bs=0;
 while((c = getchar()) != EOF)
 {
   if(c == ' ')
   {
     ++bs;
      while(bs >= 1)
      {
       putchar(c);
       bs=0;
       while((c = getchar()) == ' ')
       {
       } 
      }
       }
       /*putchar(c);*/
 


   if(c != ' ')
   {
      putchar(c);
      bs=0;
   };
  };
 };

