/*Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Shold n be a variable or a symbolic parameter?*/


/*tab stop of 9 i.e tab stops occur after every 8th blank represented by '!'.    !________!________!________!  */

/*set tab stop as symbolic constant "STOP". 
setup variable 'n' to store count of characters.

setup loop to retrieve characters. if n >= to STOP reset n to 0.
if character is a '\t' replace with blanks spaces == to  STOP - n 
9 - n(7) = 2			
9 - n(8) = 1
9 - 
*/


#include <stdio.h>

#define STOP 4

int main()
{
 int i;
 int c;
 int n;  
 while ((c = getchar()) != EOF){
   if (c == '\t'){
     while((STOP - n) > 0) {
       putchar(' ');
       ++n;
/*printf("   found a tab, n is %d\n", n);*/
     }
    }
   else {  
    if (n < STOP){
    putchar(c); 
    ++n;
/*printf("   n is < STOP, n is %d\n", n);*/
    }
    else {
    putchar(c);
    n = 0;
/*printf("   n is set to 0\n");*/
    }

   }
  }
}		




