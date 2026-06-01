/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int Vetor[5];
    int i;
    
    //preenchendo o vetor com numeros de 1 a 5
    for(i = 0; i < 5; i++)
    {
        Vetor[i] = i + 1;
        
    }
    //Exibindo o Vetor
    printf("Vetor com valores de 1 a 5: \n");
    for(i = 0; i<5; i++)
    {
        printf("%d ",Vetor[i]);
    }
    printf("\n");
    return 0;
}
