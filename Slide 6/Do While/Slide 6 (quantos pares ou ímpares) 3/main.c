/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, impar = 0, par = 0, counter = 1; //criando as variaveis 
    
    do //faz até que...
    {
        printf("Digte o %dº numero:\n", counter); //pede um numero
        scanf("%d", &num); //escaneia ele
        
        if(num % 2 == 0 && num != 0) //verifica se é par
        {
            par ++; //adciona par
            counter ++; //adciona counter
        }
        else if (num % 2 != 0 && num != 0) //verifica se é ímpar
        {
            impar++; //adciona ímpar
            counter++; //adciona counter
        }
        
    }
    while(num != 0); //até que num seja 0
    
    printf("%d valore(s) são pares!\n", par); //exibe quantos são pares
    printf("%d valore(s) são ímpares!\n", impar); //exibe quantos são ímpares

    return 0;
}