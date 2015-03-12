#include <stdio.h>

int main()
{
 int c;
 while((c = getchar()) != EOF)
  {
   if (c == '\n')
     {
     }
   if (c == ' ' || c == '\t')
     {
      putchar('\n');
     }
   else
   {
   putchar(c);
   }
 }
}
