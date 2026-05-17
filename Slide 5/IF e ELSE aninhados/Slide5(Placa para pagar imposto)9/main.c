/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ultimodigito; //variavel do digito
    
    printf("Qual o último número da placa de seu automovel? "); //pede o ultimo digito
    scanf("%d", &ultimodigito); 
    
    if(ultimodigito == 1) //se ultimodigito = 1, paga em Janeiro
    {
        printf("Pagar imposto em janeiro!");
    }
    else
    {
        if(ultimodigito == 2) //se ultimodigito = 2, paga em Fevereiro
        {
            printf("Pagar imposto em fevereiro!");
        }
        
        if(ultimodigito == 3) //se ultimodigito = 3, paga em Março
        {
            printf("Pagar imposto em março!");
        }
        
        if(ultimodigito != 1 && ultimodigito != 2 && ultimodigito != 3) //se ultimodigito diferente de 1, de 2 e de 3...
        {
            printf("Pagar imposto em abril!"); //...paga-se em Abril
        }
    }

    return 0;
}
