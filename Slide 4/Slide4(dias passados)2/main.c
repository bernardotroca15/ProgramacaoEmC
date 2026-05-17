/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes, dia, diasPassados;//variáveis inteiras
    
    printf("Digite o dia do mês:");//pede o dia do mês
    scanf("%d",&dia);//escaneia o dia
    
    printf("Digite o mês, em NÚMERO:");//pede o mês
    scanf("%d",&mes);//escaneia o mês
    
    diasPassados = (mes*30) + dia;//calcula os dias que se passaram
    
    printf("Já se passaram %d dias !", diasPassados);//exibe os dias que se passaram

    return 0;
}
