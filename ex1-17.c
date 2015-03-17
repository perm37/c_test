#include <stdio.h>
/*ex 1-17. Write a program to print all input lines that are longer than 80 characters*/

#define MAXLINE 1000
#define THRESHOLD 80
int mygetline(char line[], int maxline);

int main()
{
int len /*storage for length of line*/
int myline[MAXLINE];

while((len = mygetline(myline, MAXLINE)) > 0)
  if (len > 80) {
    printf("%s", myline); 
    }
  els


get user input (getchar)
take chars and store in array,increment a counter for each character added. end of line is marked by a newline and string is marked by a \0 (null char)
return counter
if counter is > 80
print the array

}

int mygetline(char s[], int line)
{
  
