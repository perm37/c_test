#include <stdio.h>

int temp(int x);

int main()
{
int lower;

lower=0;
temp(lower);

}

int temp(int fahr)
{
int upper, step;
int celsius;

upper = 300;
step = 20;

while (fahr <= upper) {
   celsius = 5 * (fahr-32) / 9;
   printf("%d\t%d\n", fahr, celsius);
   fahr = fahr + step;
 }
return 0;
}

