/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num; //numero inteiro
    num = 1000; //num comeca como 1000
    while(num >= 1000 && num <= 1299) // enquanto numero nao chega  a 1299...
    {
        if (num % 11 == 5) //se numero der resto 5 dividido por 11...
        {
            printf("%d quando dividido por 11 dá resto 5 \n", num); //exibe o numero
        }
        num++; //incrementa o numero
    }
    return 0;
}
