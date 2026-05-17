/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano;
    printf("Em qual ano você nasceu? ");//pede o ano de nascimento do usuário
    scanf("%d",&ano);//escaneia o ano
    
    if(ano<=2010)//verifica se pode votar ou não pelo ano de nascimento
    {
        printf("Parabéns!Voce pode votar!");//diz que pode votar
    }
    else
    {
        printf("Que pena, voce ainda não pode votar!");//diz que não pode votar
    }

    return 0;
}
