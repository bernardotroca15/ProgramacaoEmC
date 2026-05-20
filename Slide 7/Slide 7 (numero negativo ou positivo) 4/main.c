/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

//previa da função
bool numeroInteiro(int numero);

//funcao principal
int main()
{
    int numero;
    
    printf("Digite um numero e direi se é positivo ou negativo:\n");
    scanf("%d",&numero);
    printf("1 é postivo! 0 é negativo!\n");
    printf("Saída: %d", numeroInteiro(numero));
    return 0;
}
//funcao para verificar se o numero é negativo ou não
bool numeroInteiro(int numero)
{
    if (numero < 0)
    {
        return false;
    }
    else if (numero > 0)
    {
        return true;
    }
}