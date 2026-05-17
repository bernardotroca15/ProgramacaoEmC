/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, multiplicacao;
    
    printf("Digite o primeiro numero: \n");//pede o numero 1
    scanf("%d", &num1);//escaneia o numero 1
    printf("Digite o segundo numero: \n"); // pede o numero 2
    scanf("%d", &num2);//escaneia o numero 2
    
    multiplicacao = num1 * num2; //multiplica
    
    printf("A soma dos valores é : %d \n", multiplicacao); //exibe o resultado
    

    return 0;
}