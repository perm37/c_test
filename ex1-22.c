/*ex1-22. Write a program to "fold" long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.*/

/*This is basically a word wrap program. Any word after x column should be moved to a new line. whole words that cross the column barrier should be moved to the new line and not split. If the second line crosses x column then that line should also be placed on a new line so on and so on.*/


#include <stdio.h>
#define BARRIER 30

int main()
{
int b;
int c;
int k = 0;

while ((c = getchar()) != EOF){
 if (k >= BARRIER){
   if ((c == ' ') || (c == '\t')){
    putchar('\n');
    k = 0;
   }
   else{
    k=0;
    b=0;
    while (b != 1){
    c = getchar();
     if ((c == ' ') || (c == '\t')){
      putchar('\n');
      b = 1;
     }
     else if (c == EOF){
      b = 1;
     }
     else{
     putchar(c);
     }
    }
      
  k = 0;
   } 
 }
  else{
 putchar(c);
 ++k; /*keep track of how many characters we're at*/
   }

}


}
