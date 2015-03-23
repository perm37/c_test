#include <stdio.h>
/* Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.*/

/* get chars from user and store in array.
   get length of array of chars
   pass char array down to reverse[] by reference
   setup 2 counters.
   counter 1 starts at the top of the length count and works its way to 0
   counter 2 starts at 0 and works its way to > length

   from_array will start at 0 and increment up
   to_array will start at "len" and decrement down

   to_array[d] = from_array[i];


*/

int mygetline(char from[]);  /*array #1.*/
void reverse(char from[],char to[], int len); /*array #2. pass by reference here no need for a return value*/

#define MAXLINE 1000
int main()
{
int len;
char original[MAXLINE];
char cloned[MAXLINE];

len = mygetline(original); /*get chars from user here*/
/*printf("len is %d\n", len);*/
reverse(original, cloned, len);/*copy the first array into the second in reverse order*/
printf("%s", cloned); /*print the final array reversed*/


}

/*function that gets character stream from user and stores in array*/
int mygetline(char s[])
{
 int c; /*store user chars in here*/
 int i; /*store array subscript here*/
 i = 0;
 while((c = getchar()) != EOF && c != '\0' && c != '\n')
  {
   s[i] = c;
   ++i;
  }
 if (c == '\n')
  {
   s[i] = c;
   ++i;
  }
   s[i] = '\0';
   return i;
  }


/*function that reverses a string*/
void reverse(char from[], char to[], int len) {
int i,d; /* i holds increment count, d holds decrement count */
d = len - 1; 
  for (i=0; d > 0; ++i){
       /*printf("in for loop\n");*/
       --d;
       to[i] = from[d];
  }


to[i] = '\n';
++i;
to[i] = '\0';
return;
}

