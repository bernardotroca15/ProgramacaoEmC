/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int variavelA, variavelB;//variáveis 
    
    printf("Digite o valor inteiro de A:");//pede o valor de A
    scanf("%d",&variavelA);
    
    printf("Digite o valor inteiro de B:");//pede o valor de B
    scanf("%d",&variavelB);
    
    printf("Os valores normais de cada variável é A = %d e B = %d \n", variavelA, variavelB);//exibe A e B
    
    variavelA = variavelA + variavelB;//soma A com B
    variavelB = variavelA - variavelB;//remove o valor de B para apresentar somente A
    variavelA = variavelA - variavelB;//remove o valor de A para aprensetar somente B
    
    printf("Os valores trocados são A = %d e B = %d", variavelA, variavelB);//exibe os valores trocados


    return 0;
}
