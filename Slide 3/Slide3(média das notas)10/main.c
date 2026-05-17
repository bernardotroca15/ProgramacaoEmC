/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media; //as variáveis 
    
    printf("Digite a nota 1: \n"); //pede a nota 1
    scanf("%f",&nota1); //escaneia a nota 1
    
    printf("Digite a nota 2: \n"); //pede a nota 2
    scanf("%f",&nota2); //escaneia a nota 2
    
    printf("Digite a nota 3: \n"); //pede a nota 3
    scanf("%f",&nota3); //escaneia a nota 3
    
    printf("Digite a nota 4: \n"); //pede a nota 4
    scanf("%f",&nota4); //escaneia a nota 4
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;//calcula a media
    
    printf("A média: %.2f", media);//exibe a media


    return 0;
}
