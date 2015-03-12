#include <stdio.h>

int main()
{
int c,j,bs,bs2;
bs=0;
bs2=0;
 while((c = getchar()) != EOF)
 {
   if(c == ' ')
   {
     ++bs;
      while(bs > 1)
      {
      printf("\tin while bs > 1, bs is %d\n", bs);
       
       while((c = getchar()) == ' ')
       printf("\tin while c = getchar() == ' ', bs is %d\n", bs);
       {
          ++bs2;
        j = c;
       while(bs2 > 1)
       {
       printf("\tin while bs2 > 1\n");
       /*printf("\tbs2 is %d\n", bs2);*/
       putchar(c);
       printf("\tputchar(c) is %d\n", c); 
       putchar('\b');
       printf("\tputchar('\\b')\n");
       --bs2;
       /*if(bs2 == '2')
       {
       putchar(' ');
       } */
      }
       }
       putchar(c);
       /*printf("bs is %d in bs2 while loop\n", bs);*/
       printf("\tputchar(c) is %d\n", c);
     };
       putchar(c);
       /*printf("bs is %d in main while loop\n", bs);*/
       printf("\tputchar(c) is %d\n", c);
    };
 


   if(c != ' ')
   {
       printf("\tin if c!= ' ', bs is %d\n", bs);
      putchar(c);
      printf("\tputchar(c) is %d\n", c);
      bs=0;
   };
  };
}

