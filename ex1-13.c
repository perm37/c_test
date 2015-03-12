#include <stdio.h>

int main()
{



int c,n,h,i;
int word_length[69];

/*subscripts[0][1][2][3][4][5][6][7][8][9].......[68][69]

values    [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]       [  ][  ]
afterinit [0][0][0][0][0][0][0][0][0][0].......[00][00] */
 
c = 0;
n = 0;
h = 0;
i = 0;


/*initialize array elements to all 0*/
for (i = 0; i < 69; i++)
    {
     word_length[i] = 0;
    }
while((c = getchar()) != EOF)
{
  while((c >='A' && c <='Z') ||  (c >= 'a' && c <= 'z'))
    {
     n++;
     c = getchar();
    }

  if (n > 0)
   {
    word_length[n] =  word_length[n] + 1;
    n = 0;
   }

  if (c == '\n')
   {
    for (i=0; i < 69; i++)
      {
       h = 0;
       printf("%d ",i);
       h = word_length[i];
        while (h > 0)
         {
           printf("#");
            h--;
         }
       putchar('\n');
       }
    }
 }

}
        
