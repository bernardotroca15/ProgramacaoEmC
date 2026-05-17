/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char sexo; //variavel para pedir o sexo do usuario
    
    printf("Qual o seu sexo? M (masculino) ou F (feminino)? "); //pede o sexo do usuario
    scanf("%c", &sexo); //escaneia ele
    
    if (sexo == 'M' || sexo == 'm') //se for M ou m então homem
    {
        printf("Você é homem.");
    }
    else //senão..
    {
        if (sexo == 'F' || sexo == 'f') //se for F ou f então mulher
        {
            printf("Você é mulher.");
        }
        if (sexo != 'F' && sexo != 'f' && sexo != 'M') //se nem F nem M então é uma letra inválida
        {
            printf("Letra inválida!");
        }
    }

    return 0;
}
