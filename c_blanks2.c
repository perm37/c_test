#include <stdio.h>

int main(){
int c,lc,lc2,j;
lc = 0;
lc2 = 0;
  while((c = getchar()) != EOF){
    if(c == ' '){
      ++lc;
      while(lc > 2){
         /*printf("\tvalue of lc is %d\n", lc);*/
         while((c = getchar()) == ' '){
        /*printf("\tlc2 before is %d\n", lc2);*/
           ++lc2;
           lc=0;
          /*printf("\tlc2 after is %d\n", lc2);*/
          /*if(c != ' '){
           lc=0;
          }*/
       }
      }
     }
     if(c != ' '){
        j = c;
        lc=0;
          /*printf("\tlc2 is %d\n", lc2);*/
          while(lc2 > 3){
          /*printf("lc2 > 3");*/
          c = '\b';
        /*printf("\tdo putchar \\b");*/
          putchar(c);
          /*printf("\tlc2 is %d\n", lc2);*/
          --lc2;
          /*printf("\tlc2 is %d after decrement\n", lc2);*/
           }
       putchar(j);
       }
/*putchar(c);*/
       }
}
