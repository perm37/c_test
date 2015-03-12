#include <stdio.h>

int main()
{

#define MAXCHARS 94
#define CHARHIGH 126
#define CHARLOW  33
int a,i,n,c;
int word_count[MAXCHARS]; 

for (i=0; i < MAXCHARS; ++i)
     word_count[i] = 0;


while ((c = getchar()) != EOF)
    {
     if (c >= CHARLOW && c <= CHARHIGH)
       {
        ++word_count[c - CHARLOW];
        }
     
     else if (c == '\n')
       {
      for (i=0; i < MAXCHARS; ++i)
         {
        printf("%c| ", i + 33);
           while(word_count[i] > 0)
           {
            printf("#");
            --word_count[i];
            }
            printf("\n"); 
          }
      }
}
}
