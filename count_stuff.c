#include <stdio.h>
int main()
{
int c, lc;
lc = 0;
while((c = getchar()) != EOF){
    if (c == '\t')
        ++lc;
    printf("%d\n", lc);}
}
