/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, counter = 0; //criando as variaveis 
    
    do //faz até que...
    {
        printf("Digte um numero:\n");  //pede um numero
        scanf("%d", &num); //escaneia ele
        
        if(num != -1) //se for diferente de -1
        {
            counter++; //adciona valor
        }
        
    }
    while(num != -1); //...até que num seja -1
    
    printf("Voce digitou %d numero(s)!",counter); //exibe a quantidade de valores lidos


    return 0;
}
