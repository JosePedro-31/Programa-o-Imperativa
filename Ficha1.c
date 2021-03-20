/*
EXERCÍCIO 1.
  a)
    int x, y;
    x = 3; y = x+1;  3  4
    x = x*y; y = x + y;  12  16   
    printf("%d %d\n", x, y);  12 16

  b)
    int x, y;
    x = 0;
    printf ("%d %d\n", x, y); 0 error

  c) 
    (assuma que os códigos ASCII dos caracteres ’A’, ’0’, ’ ’ e ’a’ são respectivamente 65, 48, 32 e 97)
    char a, b, c;
    a = ’A’; b = ’ ’; c = ’0’; 
    printf ("%c %d\n", a, a);  A  65
    a = a+1; c = c+2;  66  50
    printf ("%c %d %c %d\n", a, a, c, c);  B 66 2 50  
    c = a + b;  66+50 = 116
    printf ("%c %d\n", c, c); t 116

  d)
    int x, y;
    x = 200; y = 100;
    x = x+y; y = x-y; x = x-y;  x=300  y=200  x=100
    printf ("%d %d\n", x, y);  100  200


EXERCÍCIO 2.
  a)
    int x, y;
    x = 3; y = 5;
    if (x > y)  FALSE
    y = 6;
    printf ("%d %d\n", x, y);  3  5

  b)
    int x, y;     
    x = y = 0;  0
    while (x != 11) {
    x = x+1; y += x;  
    1, 1 - 2, 3 - 3, 6 - 4, 10 - 5, 15 - 6, 21 - 7, 28 - 8, 36 - 9, 45 - 10, 55 - 11, 66 
    }
    printf ("%d %d\n", x, y);  11  66

  c)
    int i;
    for (i=0; (i<20) ; i++)
    if (i%2 == 0) putchar (’_’);
    else putchar (’#’);
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
_ # _ # _ # _ # _ # _  #  _  #  _  #  _  #  _  #

d)
    void f (int n) {
        while (n>0) {
            if (n%2 == 0) putchar (’0’);
            else putchar (’1’);
            n = n/2;
        }
        putchar (’\n’);
        }
  
    int main () {
        int i;
        for (i=0;(i<16);i++)
            f (i);
        return 0;
    }  
    Output seria: 0101010101010101\n         
*/

// EXERCÍCIO 3.

// 1)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado (int n)
{ 
  int i= 0; 
  int j = 0;
  while (j < n)
  {
    while (i < n)
    {
      putchar ('#');
      i++;
    }
  putchar ('\n');
  j++;
  i = 0;
  }
}

// 2)

void tabuleiro (int n) 
{
  for (int i=0; (i<n); i++)
    {
      for (int j=0; (j<n); j++)
        {
          if (((i+j)%2) == 0)
            {
              putchar ('#');
            }
          else putchar('_');
        }
        putchar ('\n');
    }
}