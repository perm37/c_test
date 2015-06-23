
#include <stdio.h>

/* Write a program to remove all comments from a  C program. Don't forget to handle quoted strings and character constants properly. C comments don't nest*/

/*function -> read characters into array*/
/*check for beginning comment which is a / followed by a *. if we find both, turn variable start_comm from 0 to 1 and log positions in array in variable * will be current and / will be (current - 1) */
/*check for ending comment which is a * followed by a /. if we find both turn variable end_comm from 0 to 1 and log positions in array. / will be current and * will be (current - 1)*/

#define MAXLINE 1000
void populate(char comment[], int comm);
void remove_comm(char comment[]);
void init_arr(char comment[]);

int main()
{
/*printf("beginning of main function\n");*/
 int c;
 int i;
 char comment[MAXLINE];
 while(c != EOF){
/*printf("while c != EOF\n");*/
 init_arr(comment);
 populate(comment, c);
 remove_comm(comment);
/*printf("in main function\n");*/
 c = 1;
/* printf("c is %c\n", c);*/
 for ( i = 0; c != '\0' ; ++i  ){
/*printf("  for ( i = 0; c != \\0; ++i )\n");*/
  c = comment[i];
  putchar(c);  
 
 }
putchar('\n');
init_arr(comment);
}
}

/*function to populate array with characters from user input*/
void populate(char comment[], int c){
/*printf("in populate function\n");*/
  int i;
   for(i = 0; (c = getchar()) != '\n' || '\0'; ++i){
     comment[i] = c;
   }
    comment[i] = '\n';
    ++i;
    comment[i] = '\0';
return;
}    

/*function to initialize the array*/
void init_arr(char comment[]){
 int i;
 for (i = 0; i < MAXLINE; ++i){
   comment[i] = 0;
 }
}



/*function to remove all comments*/   
void remove_comm(char comment[]){
/*printf("in remove_comm function\n");*/
  int i;
  int c;
  int f_comm = 0;
  int l_comm = 0;
  int f_comm_pos = 0;
  int l_comm_pos = 0;
  int lock;

  for(i = 0; (c = comment[i]) != '\0'; ++i){
  /*for(i = 0; c != '\0'; ++i){*/
/*printf("for i =0; c != \\0; ++i\n");*/
   c = comment[i];
/*printf("c is %c\n", c);*/
/*printf("f_comm is %d\n", f_comm);*/
    if (c == '/' && f_comm != 1){
/*printf("  if c == // && f_comm != 1\n");*/
       lock = 1;
       while( lock == 1 && f_comm != 1 ){
/*printf("    while lock == 1 &&  f_comm != 1\n");*/
         if ((c = comment[++i]) == '*'){
/*printf("      if (c = comment[++i]) == *\n ");*/
           f_comm = 1;
           f_comm_pos = i - 1;
           c = comment[++i];
         }
         else
/*printf("if /(c = comment[++i]/) == *  ---- else lock=0;\n");*/
          lock = 0;
       }
      }
     if (c == '*' && f_comm == 1 && l_comm != 1){
/*printf("if (c == '*' && f_comm == 1 && l_comm != 1\n");*/
       lock = 1;
       while ( lock == 1 && l_comm != 1){
/*printf("  while ( lock == 1 && l_comm != 1)\n");*/
         if (( c = comment[(++i)]) == '/'){
/*printf("    if (( c = comment[(++i)]) == // )\n");*/
             l_comm = 1;
             l_comm_pos = i - 1;
         }
         else
/*printf("    if (( c = comment[(++i)]) == // ) --- else lock = 0\n");*/
          lock = 0;
        }
     }
    if (f_comm == 1 && l_comm == 1){
/*printf("if (f_comm == 1 && l_comm == 1)\n");*/
       
       comment[l_comm_pos] = ' ';
/*printf("l_comm_pos = %d\n", l_comm_pos);*/
       comment[(l_comm_pos + 1)] = ' ';
/*printf("l_comm_pos = %d\n", l_comm_pos);*/
       comment[f_comm_pos] = ' ';
/*printf("f_comm_pos = %d\n", f_comm_pos);*/
       comment[(f_comm_pos + 1)] = ' ';
/*printf("f_comm_pos = %d\n", f_comm_pos);*/

f_comm_pos = 0;
f_comm = 0;
l_comm_pos = 0;
l_comm = 0;

    }   
 }
return;
}
