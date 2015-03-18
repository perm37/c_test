#include <stdio.h>
/*ex 1-17. Write a program to print all input lines that are longer than 80 characters*/

#define MAXLINE 1000
#define THRESHOLD 80
int mygetline(char line[], int maxline);

int main()
{
int len; /*storage for length of line*/
char myline[MAXLINE];

while((len = mygetline(myline, MAXLINE)) > 0)
  if (len > 80) {
    printf("%s", myline); 
    }

}

int mygetline(char s[], int line)
{
  int c;
  int i;
  i = 0;
  while((c = getchar()) !=EOF && c != '\n' && c !='\0')
    {
     s[i] = c;
     ++i;
    } 
  if (c == '\n')
    {
    s[i] = c;
    ++i;
    c = '\0';
    s[i] = c;
    }

return i;
}
