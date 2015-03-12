#include <stdio.h>

int main()
{
/*
c = getchar
int keep_track[67] 
54 upper case and lower case chars; + 10 chars on #keys + escape chars \n and \t + 1 for other
We can get each characters history by assigning a subscript in the array to a char and then setup a  conditional statements to match on said char

i.e 
init array
if (c == 'a')
++keep_track[0];
if (c == 'b')
++keep_track[1];

is there a shorter way to do this?^ nested loop?

histogram printing 
get first element value and assign to i; i = keep_track[0];
*/

int c,i;
int keep_track[67];

for (i=0; i < 67; ++i)
  {
  keep_track[i] = 0;
  }

while((c = getchar()) != EOF)
{
if (c == 'a')
{
++keep_track[0];
}

else if (c == 'b')
{
++keep_track[1];
}

else if (c == 'c')
{
++keep_track[2];
}

else if (c == 'd')
{
++keep_track[3];
}


else if (c == 'e')
{
++keep_track[4];
}


else if (c == 'f')
{
++keep_track[5];
}

else if (c == 'g')
{
++keep_track[6];
}

else if (c == 'h')
{
++keep_track[7];
}

else if (c == 'i')
{
++keep_track[8];
}

else if (c == 'j')
{
++keep_track[9];
}

else if (c == 'k')
{
++keep_track[10];
}

else if (c == 'l')
{
++keep_track[11];
}

else if (c == 'm')
{
++keep_track[12];
}

else if (c == 'n')
{
++keep_track[13];
}

else if (c == 'o')
{
++keep_track[14];
}

else if (c == 'p')
{
++keep_track[15];
}

else if (c == 'q')
{
++keep_track[16];
}

else if (c == 'r')
{
++keep_track[17];
}

else if (c == 's')
{
++keep_track[18];
}

else if (c == 't')
{
++keep_track[19];
}

else if (c == 'u')
{
++keep_track[20];
}

else if (c == 'v')
{
++keep_track[21];
}

else if (c == 'w')
{
++keep_track[22];
}

else if (c == 'x')
{
++keep_track[23];
}

else if (c == 'y')
{
++keep_track[24];
}

else if (c == 'z')
{
++keep_track[25];
}


else if (c == 'A')
{
++keep_track[26];
}

else if (c == 'B')
{
++keep_track[27];
}

else if (c == 'C')
{
++keep_track[28];
}

else if (c == 'D')
{
++keep_track[29];
}


else if (c == 'E')
{
++keep_track[30];
}


else if (c == 'F')
{
++keep_track[31];
}

else if (c == 'G')
{
++keep_track[32];
}

else if (c == 'H')
{
++keep_track[33];
}

else if (c == 'I')
{
++keep_track[34];
}

else if (c == 'J')
{
++keep_track[35];
}

else if (c == 'K')
{
++keep_track[36];
}

else if (c == 'L')
{
++keep_track[37];
}

else if (c == 'M')
{
++keep_track[38];
}

else if (c == 'N')
{
++keep_track[39];
}

else if (c == 'O')
{
++keep_track[40];
}

else if (c == 'P')
{
++keep_track[41];
}

else if (c == 'Q')
{
++keep_track[42];
}

else if (c == 'R')
{
++keep_track[43];
}

else if (c == 'S')
{
++keep_track[44];
}

else if (c == 'T')
{
++keep_track[45];
}

else if (c == 'U')
{
++keep_track[46];
}

else if (c == 'V')
{
++keep_track[47];
}

else if (c == 'W')
{
++keep_track[48];
}

else if (c == 'X')
{
++keep_track[49];
}

else if (c == 'Y')
{
++keep_track[50];
}

else if (c == 'Z')
{
++keep_track[51];
}















else if (c == '\n')
 {
printf("\na");
for (i = keep_track[0]; i > 0; --i) 
 {
 putchar('#');
 }

printf("\nb");
for (i = keep_track[1]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nc");
for (i = keep_track[2]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nd");
for (i = keep_track[3]; i > 0; --i)
 {
 putchar('#');
 }

printf("\ne");
for (i = keep_track[4]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nf");
for (i = keep_track[5]; i > 0; --i)
 {
 putchar('#');
 }

printf("\ng");
for (i = keep_track[6]; i > 0; --i)
 {
 putchar('#');
 }


printf("\nh");
for (i = keep_track[7]; i > 0; --i)
 {
 putchar('#');
 }

printf("\ni");
for (i = keep_track[8]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nj");
for (i = keep_track[9]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nk");
for (i = keep_track[10]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nl");
for (i = keep_track[11]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nm");
for (i = keep_track[12]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nn");
for (i = keep_track[13]; i > 0; --i)
 {
 putchar('#');
 }

printf("\no");
for (i = keep_track[14]; i > 0; --i)
 {
 putchar('#');
 }

printf("\np");
for (i = keep_track[15]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nq");
for (i = keep_track[16]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nr");
for (i = keep_track[17]; i > 0; --i)
 {
 putchar('#');
 }

printf("\ns");
for (i = keep_track[18]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nt");
for (i = keep_track[19]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nu");
for (i = keep_track[20]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nv");
for (i = keep_track[21]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nw");
for (i = keep_track[22]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nx");
for (i = keep_track[23]; i > 0; --i)
 {
 putchar('#');
 }

printf("\ny");
for (i = keep_track[24]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nz");
for (i = keep_track[25]; i > 0; --i)
 {
 putchar('#');
 }


printf("\nA");
for (i = keep_track[26]; i > 0; --i) 
 {
 putchar('#');
 }

printf("\nB");
for (i = keep_track[27]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nC");
for (i = keep_track[28]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nD");
for (i = keep_track[29]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nE");
for (i = keep_track[30]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nF");
for (i = keep_track[31]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nG");
for (i = keep_track[32]; i > 0; --i)
 {
 putchar('#');
 }


printf("\nH");
for (i = keep_track[33]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nI");
for (i = keep_track[34]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nJ");
for (i = keep_track[35]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nK");
for (i = keep_track[36]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nL");
for (i = keep_track[37]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nM");
for (i = keep_track[38]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nN");
for (i = keep_track[39]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nO");
for (i = keep_track[40]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nP");
for (i = keep_track[41]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nQ");
for (i = keep_track[42]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nR");
for (i = keep_track[43]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nS");
for (i = keep_track[44]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nT");
for (i = keep_track[45]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nU");
for (i = keep_track[46]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nV");
for (i = keep_track[47]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nW");
for (i = keep_track[48]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nX");
for (i = keep_track[49]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nY");
for (i = keep_track[50]; i > 0; --i)
 {
 putchar('#');
 }

printf("\nZ");
for (i = keep_track[51]; i > 0; --i)
 {
 putchar('#');
 }


putchar('\n');
}
}
}
