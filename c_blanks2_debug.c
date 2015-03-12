#include <stdio.h>

int main(){
int c;
int lc;
int lc2;
lc = 0; 
  while((c = getchar()) != EOF){
  printf("\tin 1. while((c = getchar()) != EOF) c is %d\n", c);
    if(c == ' '){
     printf("\tevaluating if(c == ' ')\n \tc is a ' '\n ");
      ++lc;
      printf("\tlc is %d\n", lc);
      if(lc > 1){
      printf("\tevaluating if lc>1\n");
        lc2=0;
         printf("\tsetting lc2=0; lc2 is %d \n", lc2); 
         while((c = getchar()) == ' '){
         printf("\tin 2. while((c = getchar()) == ' ')\n");
           ++lc2;
           printf("\tincrement lc2, lc2 is %d \n", lc2);
            if(c != ' '){
             printf("\tevaluating if(c != ' ') c is a ' '\n");
             lc=0;
             printf("\tset lc=0\n");
              while(lc2 > 3){
               printf("\tin while(lc2 > 3)\n");
               putchar((c = '\b'));
               printf("\tputchar(c = '\b')\n");
               --lc2;
               printf("\tdecrement lc2, lc2 is %d \n", lc2);
               }

            
            }
          }      
       }
     }
putchar(c);
printf("\tputchar(c)\n");
   }
}

