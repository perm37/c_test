#include <stdio.h>
/*Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.*/

#define MAXCHAR 50

void squeeze(char s1[], char s2[], char s3[]);
void init_array(char s[]);
void gc(char s[]);

int main()
{
int c; 
int i;
char s1[MAXCHAR];
char s2[MAXCHAR];
char s3[MAXCHAR];

init_array(s1);  
init_array(s2);
init_array(s3);

/*get first string*/
printf("Enter first string:\n");
gc(s1);

/*get second string*/
printf("Enter second string:\n");
gc(s2);  

squeeze(s1, s2, s3);

i = 0;
c = 1;
 while(c != '\0'){
/*printf("final while\n");*/
/*printf("i is %d\n", i);*/
/*printf("c is %c\n", c);*/
  c = s3[i++];
  putchar(c);
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

/*function to delete matching characters*/
void squeeze(char s1[], char s2[], char s3[])
{
/*printf("in squeeze\n");*/
 int c;
 int i;
 int n;
 c = 1;
 i = 0;
 n = 0;
 while ( c != '\0'){
  c = s2[i];
/*printf("c is %c\n", c);*/
/*printf("i is %d\n", i);*/
   if (s2[i] != s1[i]){
/*printf("n is %d\n", n);*/
    s3[n++] = c;
   } 
 ++i;
 }
 s3[++n] = '\n';
 s3[++n] = '\0'; 
}

