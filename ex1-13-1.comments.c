#include <stdio.h>

int main()
{
#define MAXWORD 15


int r,c,word_num,h,i, bool_count,n,t,x;
int word_length[MAXWORD];
int print_hash[MAXWORD];
c = 0;
word_num = 0;
h = 0;
i = 0;

/*initialize array elements to all 0*/
for (i = 0; i < MAXWORD; ++i)
    {
     word_length[i] = 0;
    }
/*get our characters*/
while((c = getchar()) != EOF)
{
  while((c >='A' && c <='Z') ||  (c >= 'a' && c <= 'z'))
    {
    /*increment word_num by 1 everytime we get an unbroken line of alpha chars*/
     ++word_num;
     c = getchar();
     printf("getting new character\n");
    }
   
   /*check that word_num is greater than 0, if it is we increment word_length[word_num] by     1*/
   /* word_length[] is used to store the word lengths*/
 
   if (word_num > 0)
   {
    printf("word_num is greater than 0\n");
    word_length[word_num] =  word_length[word_num] + 1;
    word_num = 0;
   }
  
  /* this the "final phase". User has entered a new line so it's time to print the results;  we want a vertical histogram in this instance*/
  if (c == '\n')
   {
printf("new line found\n");
printf("word_length[");
for (i = 0; i < MAXWORD; ++i)
  {
printf("%d ", word_length[i]);
  }
printf("]\n");

      /*dump word_length[] array into new array so we can preserve the history of the session*/

      n = 0;
      while(n < 1)
      {
      h = 0;
       /*printf("n is %d", n);*/
       /*Initialize print_hash[] which is the array we will use to store the hashes to print*/
       for (i = 0; i < MAXWORD; ++i)
        {
printf("initializing print_hash[] array\n");
          print_hash[i] = 0;
        }
     
      /*Build up the print_hash[] array*/ 
      /*iterate and compare one value of the word_length with all the rest of the values; i.e word_length[1] vs word_length[0,2,3,4,5,6...]*/
      /*get the value to compare with*/
       for(i=0;i < MAXWORD; ++i)
       {
 printf("i = %d\n", i);
        /*get the value to compare against*/
        for(t=0;t < MAXWORD; ++t)
        {
 printf("compare word_length[%d] %d to word_length[%d] %d\n", i,word_length[i],t,word_length[t]);
        /*if compare and comparator are equivalent do nothing*/
         if (i == t)
         {
 printf("do nothing^\n");   
         }
        /*if compare is less than comparator place a 0 in the print_hash[compare(i)] array and the set t to MAXWORD so that we can end the comparison loop.*/
        /*we do this b/c this means that there's a value in the word_length array that is greater that the compare. The print_hash array is drawn from the word_length array and is a representation
          of each horizontal line of hash marks*/
         else if (word_length[i] < word_length[t])
         {
         print_hash[i] = 0;
         t = MAXWORD;
 printf("in else if word_length[i] < word_length[t]\n");
 printf("the variable t is %d\n print_hash[", t);
 printf("set print_hash[%d] = 0\n [", i); 
 for (r = 0; r < MAXWORD; ++r)
   {
 printf("%d ", print_hash[r]);
   }
 printf("]\n");

   }
        /*if compare is greater than or equal to comparator and is not equal to 0, set print_hash[compare(i)] to 1*/
        /*we do this b/c this means the compare value is the greatest value in the array and we want to print out a hash using the compare values in the array*/
         else if ((word_length[i] >=  word_length[t]) && (word_length[i] != 0))
         {
 printf("in word_length[i] >=  word_length[t]) && (word_length[i] != 0\n");         
 printf("the variable t is %d\n",t);
         print_hash[i] = 1;
        /*set the variable h to compare value. This value should be set to whatever the equivalent compare value is in the word_length array. For example if 5 8 letter words were captured then we want
          to capture the 5 in subscript word_length[8]. We want to the print the 5 in the vertical column next to the hashes from print_hash<<re-vist*/
          if (word_length[i] > h)
           {
            h = word_length[i];
           }
          else
           {
           }
 printf("set print hash[%d] = 1\n", i);
 printf("print_hash[");
  for (x = 0; x < MAXWORD; ++x)
  {
   printf("%d ", print_hash[x]);
   }
   printf("]\n");

         }
        }

       }

      
      bool_count = 0;
      for(i=0; i < MAXWORD ; ++i)
      {
  printf("bool count is %d\n", bool_count);
       if (print_hash[i] !=  0)
        {  
         /*increment bool_cont by 1 if value of print_hash[i] is not 0. We do this b/c we're trying to check for the case in which there are no more hashes to print*/
          ++bool_count;
          /*printf("word_count_tmp-%d-[%d]\n",i, word_length[i]);*/
        }
      }
      /*if this condition is matched this means that there were no more hashes in the print_hash[] array so now we're going to print the final line, a sequence of integers up to MAXWORD i.e 1 2 3 4 5 etc.*/
      if (bool_count == 0)
      {
       /*setting n to 1 means we're done*/
       /*h = 0;*/
       n = 1;
       printf("    ");
       for (i=0; i < MAXWORD - 1; ++i)
       {
        printf(" %d", i);
       }
      }
      /*if this condition is met this means we still have hashes to print*/
       else if (bool_count > 0)
      {
      /*this will print the number of words of x length in the far left column from the value gathered from the variable h. To follow from the example above this would entail the #5 being printed*/
       printf("%d|", h);
      /*print a hash if print_hash[i] is 1 or a blank if print_hash[i] is 0*/ 
       for(i=0; i < MAXWORD - 1; ++i)
        if (print_hash[i] == 1)
        {
         if(i < 10)
         {
         printf(" #");
         --word_length[i];
         }
         else
         {
         printf("  #");
         --word_length[i];
         /*printf("i in # is %d\n", word_length[i]);*/
         }
        }
        else if (print_hash[i] == 0)
        {
         if(i < 10)
         printf("  ");
         else
         printf("   ");
         /*printf("i in blank is %d\n", i);*/
         }
      }
        putchar('\n');     
 printf("word_length[");
 for (r=0; r < MAXWORD; ++r) 
   {
 printf("%d ", word_length[r]);
   }
 printf("]\n");
      }
         }
       putchar('\n');
       }
    }
       
