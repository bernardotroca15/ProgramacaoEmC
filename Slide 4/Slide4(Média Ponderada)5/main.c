/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;//variáveis 
    
    printf("Qual o valor da primeira nota?");//pede o valor da nota 1
    scanf("%f",&nota1);
    
    printf("Qual o valor da segunda nota?");//pede o valor da nota 2
    scanf("%f",&nota2);
    
    printf("Qual o valor da terceira nota?");//pede o valor da nota 3
    scanf("%f",&nota3);
    
    printf("Qual o valor da quarta nota?");//pede o valor da nota 4
    scanf("%f",&nota4);
    
    media = ((nota1*1)+(nota2*2)+(nota3*3)+(nota4*4))/10;//calcula a media ponderada
    
    printf("A média ponderada é:%.2f",media);//exibe a media ponderada

    return 0;
}
