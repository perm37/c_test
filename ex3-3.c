#include <stdio.h>

/*Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be pepared to handle cases liks a-b-c and -a-z. Arrange that a leading or trailing - is taken literally.*/


/*acceptable char ranges 0-9, a-z, A-Z i.e 48-57, 97-122, 65 - 90*/
/*getchar's and place in array s1*/
/*check s1 input; format should be always be  (char dash char)*/ 

int expand(int s1[], int s2[]);
void init_arr(int s[]);

#define MAXCHARS 50



int main(){
int c;
int i;
int s1[MAXCHARS] = {};
int s2[MAXCHARS] = {};


init_arr(s1);
init_arr(s2);

i = 0; 
while((c = getchar() != '\n')){
     s1[i++] = c;
}
    s1[i++] = '\n';
    s1[i] = '\0';
}





void init_arr(int s[]){
int i;
     for(i=0;i < MAXCHAR; ++i){
         s[i] = 0;
     }
      


int expand(s1[], s2[]){
int i;
int j; /*ranges should always be 3 chars, this int keeps track of where we are*/
int t;
int first;
int last;
i = 0;
while(c != '\n'){

 
if (j > 2){
   j = 0;

}

if (j == 2){

t=0;
for(t=0;t < last;++t){
   s[t] = first + t;
printf("s[t] is %c", s[t]); 
}



/*BEGIN switch*/ 
 switch(j){
 /*get the first char*/
  case 0: 
     first = s1[i++];
       j++;
  break;
/*get the second char and ensure it's a - */
  case 1:   
    if (s1[i] == '-'){ 
      dash = s1[i++];
      j++;
    }
    else{
     printf("Incorrect format\n");
     return 1;
    }
  break;
/*get the last char*/
  case 2:
    second = s1[i++];
    j++; 
  break;

  default:
    break;
/*END switch*/
}
