/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num; //variavel de numero inteiro
    num = 300; //num comeca como 3000
    
    while(num <= 300 && num >= 10) //enquanto não chega em 10...
    {
        if (num % 2 != 0 && num % 7 == 0) //se numero for impar e divisível por sete...
        {
            printf("%d é ímpar e divisível por 7!\n", num); //exibe o numero
        }
        
        num--; //decrementa o numero
    }

    return 0;
}
