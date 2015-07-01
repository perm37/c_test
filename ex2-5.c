#include <stdio.h>
/*Write the function any(s1,s2), which returns the first location in a string s1, where any character from the string s2 occurs, or -1 if s1 contains no characters from s2 (The standard library function strpbrk does the same job but returns a pointer to the location.)*/

int any(char s1[], char s2[]);
void init_array(char s[]);
void gc(char s[]);
#define MAXCHAR 50 

int main()
{
int r = 0;

char s1[MAXCHAR];
char s2[MAXCHAR];

init_array(s1);
init_array(s2);

/*get first string*/
printf("Enter first string:\n");
gc(s1);

/*get second string*/
printf("Enter second string:\n");
gc(s2);

r = any(s1, s2);

 if (r != -1){
  printf("location of first same char is %d\n", r - 1);
}
 else{
  printf("no matching chars found\n");
 }
}



/*function to initialize array*/
void init_array(char s[])
{
int i;
 for(i = 0; i < MAXCHAR; ++i){
    s[i] = 0;
}
return;
}


/*function to collect characters in array*/
void gc(char s[])
{
/*printf("in gc\n");*/
 int c = 1;
 int i = 0;
   while(c != '\n'){
/*printf("while c! = \\0\n");*/
    c = getchar();
     s[i++] = c;
   }
   if(c == '\n'){
    s[++i] = '\n';
    s[++i] = '\0';
    }
/*printf("return gc\n");*/
return;
}


/*function compares s1 to s2, if character is found in s2 then return the position of that char in s1*/ 
int any(char s1[], char s2[])
{
 int i = 0;
 int n;
 int c = 1;
 int c1;
  while (c != '\n' || c != '\0')
  {
/*printf("in first while\n");*/
   c1 = 1;
   n = 0;
   c = s1[i++];
    if (c == '\n' || c == '\0'){
      return -1;
     }
    while(c1 != '\n'){
     c1 = s2[n++];
/*printf("c:%c", c);*/
/*printf(" -- c1:%c\n", c1);*/
      if(c == c1){
       return i;
      }
    }
  }
}
