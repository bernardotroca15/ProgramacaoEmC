/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite o número:");//pede o numero ao usuário
    scanf("%d",&numero);//escaneia o número
    
    if(numero % 2 == 0)//se divide por 2 e da resto 0 é par
    {
        printf("O numero é par!");//diz que o numero é par
    }
    else
    {
        printf("O numero é ímpar!");//diz que o numero é ímpar
    }
    

    return 0;
}
