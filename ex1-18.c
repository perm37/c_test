#include <stdio.h>
/*ex1-18.Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines*/


/*populate array #1 with a string of characters from user input(getchar). Loop through character array #1 and copy to character array #2. We want to remove trailing spaces so we need to A. keep track of a position that has a white space or tab, and B. start a count after that position so we know how many \t or ' ' to remove. If we encounter a null char keep the count and stop, if we encounter a character reset thecount and continue.*/



int mygetline(char from[]);  /*array #1.*/
void clone(char from[],char to[], int len); /*array #2. pass by reference here no need for a return value*/

#define MAXLINE 1000
int main()
{
int len;
char original[MAXLINE];
char cloned[MAXLINE];

len = mygetline(original); /*get chars from user here*/
printf("len is %d\n", len);
clone(original, cloned, len);/*copy the first array into second sans omitted chars*/
printf("%s", cloned); /*print the final array with trailing tabs and blank spaces removed*/


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


/*function that removes trailing tabs and spaces and copies array*/
void clone(char from[], char to[], int len)
 {
 int c = 0;
 int i; 
 int upper;

for(i=0; i < len; ++i){
if (from[i] == ' ' || from[i] ==  '\t' || from[i] == '\0' || from[i] == '\n'){
 ++c;
printf("character matches tab, blank, or null set c to %d\n", c); 
}
else{
 printf("charcter is not tab, blank, or null set c to 0\n");
 c = 0;
}
}

upper = (len - c) + 1;
printf("upper is %d, c is %d\n", upper, c);
i = 0;
for(i = 0;i < upper;++i){
 to[i] = from[i];
} 
to[i] = '\n';
++i;
to[i] = '\0';
return;
}
