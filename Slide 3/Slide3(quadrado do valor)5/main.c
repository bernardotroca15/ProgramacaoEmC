/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num, quadrado; //variaveis
    
    printf("Digite o valor para descobrir seu quadrado: \n"); //pede o valor
    scanf("%f", &num); //escaneia o valor
    
    quadrado = num * num; //calcula o quadrado do número
    
    printf("O quadrado desse número é: %.2f", quadrado); //exibe o resultado da potencia

    return 0;
}
