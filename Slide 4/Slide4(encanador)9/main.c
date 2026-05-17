/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float dias, valorapagar;//variáveis
    
    printf("Quantos dias foram trabalhados?");//pede a quantidade de dias trabalhados
    scanf("%f",&dias);
    
    valorapagar = (dias*150)-(0.08*(dias*150));//calcula o salário líquido
    
    printf("A quantia líquida a ser paga será de %.2f reais", valorapagar);//exibe o salário líquido
    
    return 0;
}
