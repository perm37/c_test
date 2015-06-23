#include <stdio.h>

int check(int c, int p);
int htoi(char hex[], int i);
int hex_store(int c, int i, char hex[]);
int init_arr(char hex[]);
#define MAXCHAR 20
int main()
{
int c,n;
int p = 0;
unsigned long int i = 0;
int valid;
int prefix_first;
int prefix_sec;
int prefix_a;
int tmp_1;
int s_status;
char hex[MAXCHAR];

init_arr(hex);

while (c !=  EOF && (c = getchar()) != EOF){
++i;
/*printf("i is %ld\n",i);*/
/*printf("c is %c\n",c);*/
if (i > 2){
  p = 0;
 }

if (i == 1){
  if (c == '0'){
   prefix_first = 1;
   tmp_1 = c;
  }
 }
 if (i == 2){
  if (c == 'X' || c == 'x'){
   prefix_sec = 1;
  }
 }
 if (i == 2 && prefix_first == 1 && prefix_sec == 1){
  p = 1;
  i = 0;
  init_arr(hex);
  prefix_first = 0;
  prefix_sec = 0;
 }

valid = check(c, p);
 if (valid == 1){
   printf("%c is an invalid character\n", c);
   c = EOF;
   }
 

 else if (prefix_first != 1 || i > 2){
    s_status = hex_store(c, i, hex);
      if (s_status == 1){
        ++i;
        i = htoi(hex, i);
/*printf("returned i to main\n");*/
        printf("%ld\n", i);
        c = EOF;
       }

 }
}
}



int check(int c, int p){
/*checks to see if char entered is in valid range [0-9][a-f][A-F][Xx]*/
int i;

/*check against [0-9]*/

for(i='0'; i <= '9'; ++i){
  if(c == i || c == '\n')
    return 0;
  }
for(i = 'a'; i <= 'f'; ++i){
  if(c == i)
    return 0;
  }
for(i = 'A'; i <= 'F'; ++i){
  if(c == i)
    return 0;
  }

if((c == 'x' || c == 'X') && p == 1)
  return 0;
else
  return 1;

return 1;
}

int init_arr(char hex[]){ 
int n;
/*initialize the array*/
/*printf("initialize array\n");*/
for (n = 0;n <= MAXCHAR; ++n){
     hex[n] = 0;
 }
}

int hex_store(int c, int i, char hex[]){
/*places hex chars into character array*/
int fin = 0;
if(c == '\n'){
 hex[i] = c;
 ++i;
 hex[i] = '\0';
 fin = 1;


}
else{
hex[i] = c;
}
return fin;
}

int htoi(char hex[], int i){
 i = i - 2; 
 int c;
 int convert;
 int subscript = i;
 int power;
 int a;
 unsigned long int accumulate = 0;
while (i > 0 ){
/*printf("while i > 0\n");*/
  c = hex[i];
/*printf("i is %d\n", i);*/
/*printf("subscript is %d\n", subscript);*/
  power = subscript - i; 
/*printf("power is %d\n", power);*/
  a = 1;
/*printf("c is %c\n", c);*/
 if (power < 0){
   /*printf("return accumulate %ld\n", accumulate);*/
   return accumulate;
 
 }
 if (c >= 'a' && c <= 'f'){
   convert = c - 87;
   }
 else if (c >= 'A' && c <= 'F'){
  convert = c - 55;
  }
 else{
/*printf("else convert = c\n");*/
    convert = c - 48;
 }
/*printf("convert is %d\n", convert);*/
/*get product from power to use for conversion*/
  while (power > 0){
/*printf("while (power > 0)\n");*/
   a = 16 * a;  
   --power;
/*   printf("a is %d\n", a);*/
   }
/*accumulate converted values in variable*/
  if (a == 0){
    accumulate = convert + accumulate;
/*    printf("accumulate is %ld\n", accumulate);*/
  }
  else{    
    accumulate = (convert * a) + accumulate;
    /*printf("accumulate is %ld\n", accumulate);*/
  }
  --i;
  /*printf("i is %d\n", i);*/
  if (i == 0)
   return accumulate; 
 }

/*01234
AF\n\0
54321 
how to convert

ex. 9AC3

col 3   col 2   col 1   col 0
 9        A       C       3

9x      10x      12x
16^3    16^2     16^1
 
36,864  2560     192     3

39,619
*/
}
  

