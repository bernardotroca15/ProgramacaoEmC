/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float polegada, centimetros; //criando as variáveis
    
    printf("Digite o valor em polegadas: \n"); //pede o valor em polegadas
    scanf("%f", &polegada); //escaneia o valor em polegadas
    
    centimetros = polegada * 2.54; //calcula o valor em centímetros
    
    printf("O valor em centímetros: %.2f", centimetros); //exibe o valor em centímetros

    return 0;
}
