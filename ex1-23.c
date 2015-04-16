
#include <stdio.h>

/* Write a program to remove all comments from a  C program. Don't forget to handle quoted strings and character constants properly. C comments don't nest*/

/*function -> read characters into array*/
/*check for beginning comment which is a / followed by a *. if we find both, turn variable start_comm from 0 to 1 and log positions in array in variable * will be current and / will be (current - 1) */
/*check for ending comment which is a * followed by a /. if we find both turn variable end_comm from 0 to 1 and log positions in array. / will be current and * will be (current - 1)*/

#define MAXLINE 1000
void populate(char comment[], int comm);
void remove_comm(char comment[]);

int main()
{
 int c;
 while(c != EOF){
 char comment[MAXLINE];
 populate(comment, c);
 remove_comm(

 }
}

void populate(char comment[],int c){
  int i;
  while((c = getchar()) != EOF){
   for(i = 0; c != '\n'; ++i){
     comment[i] = c;
   }
    comment[(++i)] = '\n';
    comment[(++i)] = '\0';
  }
return;
}    

   
void remove_comm(char comment[]){
  int i;
  int c;
  int f_comm = 0;
  int l_comm = 0;
  f_comm_pos = 0;
  l_comm_pos = 0;
  int lock;

  for(i = 0; c != EOF; ++i){
   c = comment[i];
    if (c == '/'){
       lock = 1;
       while( lock == 1 && f_comm != 1 ){
         if ((c = comment[++i]) == '*'){
           f_comm = 1;
           f_comm_pos = i;
           c = comment[++i];
         }
         else
          lock = 0;
       }
     if (f_comm == 1 && c == '*'){
       lock = 1;
       while ( lock == 1 && l_comm != 1){
         if (( c = comment[++i]) == '/'){
             l_comm = 1;
             l_comm_pos = i;
         }
         else
          lock = 0;
        }
     }
    if (f_com == 1 && l_comm == 1){
      }
