/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1 = 1; //primeiro numero 
    int soma; //soma
    
    soma = num1 + 2; //soma = 1 + 2
    
    while(soma<10) //enquanto soma for menor que 10...
    {
        soma = soma + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10; //ela recebe o valor dos 10 primeiros numeros inteiros
        printf("A soma é: %d", soma); //exibe a soma
    
    }
    return 0;
}
