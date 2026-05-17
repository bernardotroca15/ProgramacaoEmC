/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float populacao = 20000; //declarando a variavel da população de mariscos
    float reducao = 0.05; //declarando o quanto que reduz
    
    for(int anos = 1; anos <= 10; anos++) //enquanto anos n chegar em 10...
    {
        populacao = populacao - (populacao*reducao); //populacao reduz em 5% ao ano
    }
    
    printf("\nA populacao final após 10 anos é: %.0f\n", populacao);
    return 0;
}
