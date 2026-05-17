/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num; //numero inteiro
    int maior; //variavel para descobrir o maior valor
    int counter; //contador para chegar em 25
    counter = 1;
    
    printf("Digite o 1º numero:\n"); //pede o primeiro valor, que por padrão será o maior
    scanf("%d",&maior);
    
    while(counter < 25) //enquanto o contador nao chegar em 25
    {
        printf("Digite o %dº numero:\n", counter + 1); //pede o numero
        scanf("%d",&num);
        
        if (num > maior) //decobre se num é maior
        {
            maior = num; //se for maior, o numero se torna o maior
        }
        
        counter++;
        
    }
    
    printf("\n%d é o maior número!", maior);
    
    return 0;
}
