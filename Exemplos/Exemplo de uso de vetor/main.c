/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define TAMANHO 5

int main(void)
{
    float notas[TAMANHO], media = 0.0;
    int i;
    
    for(i = 0;i < TAMANHO; i ++)
    {
        printf("Digite a nota do aluno: \n");//pede a nota
        scanf("%f",&notas[i]);
        
        media += notas[i]; //soma acumulada
    }
    
    media /= TAMANHO; //divisão
    
    printf("Média das notas é: %.2f\n", media);//exibe a média

    return 0;
}
