/*ex1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much text as possible*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

/*function prototypes*/
int mygetline(char line[], int maxline); /*mygetline takes an array of char type, and an int as parameters; function returns an int*/
void copy(char to[], char from[]); /*copy function takes two character arrays as parameters; function returns nothing */

/* print the longest input line */
int main()
{
    int  len;               /* current line length */
    int   max;              /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here */

    max = 0;
    while ((len = mygetline(line, MAXLINE)) > 0) /*call mygetline function; if return value is greater than 0 continue w/ loop*/
         if (len > max) {
             max = len;
             copy(longest, line);
         }
    if (max > 0){ /* there was a line */
       printf("%s line is %d characters long\n" ,longest, max);
        }
    return 0;
}

/* mygetline: read a line into s, return length */
int mygetline(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i; 
}

/*copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
