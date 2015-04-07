/*Write a program entab that replaces string of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or single blanks would suffice to reach a tab stop, which should be given preference?*/


#include <stdio.h>

#define TAB 8   /*default tab stop on computer is 8*/

/*Start counting blanks from 0.If number of consecutive blanks is < TAB, then use spaces. If number of consecutive blanks is >= to TAB then put a tab char. Reset blank counter. repeat until char is not white space*/

int tab_space(int tcount);


int main()
{
 int i;
 int c;
 int blanks;   /*keep track of blanks*/
 int k = TAB; /*keep track of chars up to TAB*/
 while ((c = getchar()) != EOF){
   if (c == ' '){
     blanks = 1;
     /*Enter while loop to count blank spaces*/
     while ((c = getchar()) == ' '){
       ++blanks;
     }
    /*Decision on what to do with the number of blanks(n) we find*/
    if (blanks <= 1 ){
     putchar(' ');
     k = tab_space(k);
     putchar(c);
     k = tab_space(k);
    }
    else if (blanks > 1 && blanks <= TAB){
      while (blanks > 0){
        putchar('|');
      k = tab_space(k);
        --blanks;
      }
      putchar(c);
      k = tab_space(k);
    }
    else if (blanks > TAB){
     while(blanks >= TAB ){
      putchar('\t');
      blanks =  blanks - k;
/*printf(" k is  %d",k);*/
      k = TAB;
       if (blanks < TAB){
 
/*printf("\n  blanks are %d\n", blanks);*/
       while (blanks > 0){
          putchar('!');
          k = tab_space(k);   
          --blanks;
       }
       }
     }
     putchar(c);
     k = tab_space(k);
     blanks = 0;
    }
   }

 else if ( c == '\n' ) {
   blanks = 0;
   k = TAB;
   putchar(c);
  }   

 else { 
    putchar(c);
    k = tab_space(k);
    blanks = 0;
  }

 }
}


int tab_space(int i)
{
 if ( i <= 1 ){
     i = TAB + 1;
   }
  --i;
/*  printf("\n  k is %d\n", i); */
  return i;
}

