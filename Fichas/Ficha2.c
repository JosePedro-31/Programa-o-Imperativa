#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

// 1.
float multInt1(int n, float m)
{
    float r = 0;
    for (int i = 0; i < n; i++)
        r += m;
    printf("%.1f", r);
}

// 2.
float multInt2(int n, float m)
{
    float r = 0;
    int c = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
            r += m;
        n = n / 2;
        m = m * 2;
        c++;
    }
    printf("%d %.1f\n", c, r);
}

// 3.
/*
int mdc (int a, int b)
{  
    int i, divisor, maior, menor;
    // calcular o menor dos dois valores 
    // vamos assegurar que o maior valor fica na variável a
    if (a<b) troca(a,b);
    // calcular divisores do menor valor (variável b),
    // selecionar o maior desses divisores que seja também divisor do maior dos valores (variável a)
    // mdc(9,3) =3     3: 1,3      9: 1,3,9 
    // mdc(18,7)=1     7: 1,7     18: 1,2,3,6,9

    divisor = 1;
    // será que há um "divisor comum" maior?
    i = 2;
    while ( i<=b ) {
        if ((b % i) == 0 && (a % i) == 0) // i é um divisor de b
            divisor = i; // encontramos um "divisor comum" maior|
            i++; // incremento
    }
    return divisor;
}
*/
int mdc1(int a, int b)
{
    int i, divisor, maior, menor, contador = 0;

    if (a < b)
    {
        maior = b;
        ;
        menor = a;
        a = maior;
        b = menor;
    }
    divisor = 1;

    for (i = 2; i <= b; i++)
    {
        if (((a % i) == 0) && ((b % i) == 0))
            divisor = i;
        contador++;
    }
    printf("Contador: %d\nMDC: %d", contador, divisor);
}

// 4.
int mdc2(int a, int b)
{
    int maior, menor, contador = 0, divisor;

    if (a < b)
    {
        maior = b;
        ;
        menor = a;
        a = maior;
        b = menor;
    }
    while (b != 0)
    {
        a = a - b;
        if (a < b)
        {
            maior = b;
            menor = a;
            a = maior;
            b = menor;
        }
        divisor = a;
        contador++;
    }
    printf("Contador: %d\nMDC: %d", contador, divisor);
}

// 5.
int mdc3(int a, int b)
{
    int maior, menor, contador = 0, divisor;

    if (a < b)
    {
        maior = b;
        ;
        menor = a;
        a = maior;
        b = menor;
    }
    while (b != 0)
    {
        a = a % b;
        if (a < b)
        {
            maior = b;
            menor = a;
            a = maior;
            b = menor;
        }
        divisor = a;
        contador++;
    }
    printf("Contador: %d\nMDC: %d", contador, divisor);
}

// 6.
    // a)
int fib1(int n)
{
    int resultado;
    if (n < 2)
        return 1;
    else
        return fib1(n - 1) + fib1(n - 2);
}

    // b)
int fib2(int n)
{
    if (!n)
        return 0;
    int a = 1, b = 1;
    while (n>2) 
    {
        int aux = a;
        a = a + b;
        b = aux;
        n--;
    }
    return a;
}

int main()
{
    return 0;
}