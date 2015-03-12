#include <stdio.h>

int main()
{
int c, lc;
  while ((c = getchar()) != EOF){
   /*printf("\tlc is %d\n", lc);*/
   if (c != ' ') {
     lc = 0;
   }
   if (c == ' '){
     /*printf("\tc is ' ' character increment lc by 1 in first if statement\n");*/
     ++lc;
     /*printf("\tlc after if is %d\n", lc);*/
      while (lc > 4){
       /*printf("\tIn second while loop (lc > 2)\n");*/
       c = '\b';
       /*printf("\tputting \\b character in second while loop\n");*/
       putchar(c);
       /*printf("\tdecrementing lc by 1 in second while loop\n");*/
       --lc;
       /*printf("\tget next character c = getchar() in second while loop\n");*/
       c = getchar();
         if (c == ' '){
            /*printf("\tin if statement as c == ' '\n");*/
           lc++;
           /*printf("\tincrementing lc by 1 lc is %d\n");*/
          
      }
        if (c != ' '){
          lc = 0;
        }
    }
  }
   putchar(c);
   /*printf("\tputchar(c) in first while loop\n");*/
 }
}



