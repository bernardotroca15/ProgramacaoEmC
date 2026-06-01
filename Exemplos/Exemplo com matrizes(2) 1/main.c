/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define NCOL 10
#define NLIN 10

int main()
{
    int Matriz[NLIN][NCOL];
    int i, j;
    
    //preenche toda a matriz com o valor 30
    for (i = 0; i < NCOL; i++) 
    {
        for (j = 0; j < NLIN; j++)
        {
            Matriz[i][j] = 30;
        }
    }
    //exibe a matriz (apenas as 5 linhas para simplificar)
    printf("Matriz 10x10 preenchida com 30 (apenas 5 linhas): \n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < NCOL; j++) 
        {
            printf("%d ",Matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
