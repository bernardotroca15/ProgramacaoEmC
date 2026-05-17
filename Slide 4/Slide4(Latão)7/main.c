/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float latao, cobre, zinco;//variáveis 
    
    printf("Quantos kilos de latão deseja produzir?");//pede o valor desejado de latão em kg 
    scanf("%f", &latao);
    
    cobre = latao-(0.7*latao);//calcula o cobre 
    zinco = latao-(0.3*latao);//calcula o zinco
    
    printf("Você precisa de %.2fkg de cobre e de %.2fkg de zinco", cobre, zinco);//exibe o cobre e o zinco

    return 0;
}
