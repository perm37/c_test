#include <stdio.h>

int main()
{
int c;
while ((c = getchar()) != EOF){
      while (c == '\t')
      {
      /*printf("this is a tab\n");*/
      putchar('\\');
      putchar('t');
      c = 0;
      }
      
      if (c == '\n')
      {
      /*printf("this is a newline\n");*/
      putchar('\\');
      putchar('n');
      }

      while (c == '\\')
      {
      /*printf("this a backslash\n");*/
      putchar('\\');
      putchar('\\');
      c = 0;
      }
   putchar(c);

   }

}
