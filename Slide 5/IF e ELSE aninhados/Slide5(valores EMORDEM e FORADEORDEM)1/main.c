/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float valor1, valor2; //valores float
    
    printf("Digite o primeiro valor: ");//pede o valor valor1
    scanf("%f", &valor1);//escaneia o valor valor1
    
    printf("Digite o segundo valor: ");//pede o valor valor2
    scanf("%f", &valor2);//escaneia o valor valor2
    
    if(valor1>valor2)//se o valor 1 é maior que o valor 2, então...
    {
        printf("A ordem é %.2f - %.2f", valor2, valor1);//imprime na ordem inversa
    }
    else //do contrário...
    {
        if(valor2>valor1)//se valor 2 é maior que o valor 1, então...
        {
            printf("A ordem é %.2f - %.2f", valor1, valor2); //imprime na ordem
        }
    }

    return 0;
}
