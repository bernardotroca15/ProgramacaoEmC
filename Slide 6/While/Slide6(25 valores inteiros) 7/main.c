/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num; // variavel de numero inteiro
    int counter = 1; //contador = 1
    int negativos = 0; //negativos comeca como 0
    
    while(counter <= 25)
    {
        printf("Qual o %dº número?\n", counter); //pede o numero
        scanf("%d",&num);
        
        if (num < 0) //se num for negativo
        {
            negativos++; //incrementa os negativos
        }
        
        counter++; //incrementa o counter
    }
    printf("%d valores são negativos!\n", negativos); //exibe os valores negativos 

    return 0;
}
