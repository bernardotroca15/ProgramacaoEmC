/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    int resp;
    
    do
    {
        printf("Digite a primeira nota:\n");
        scanf("%f",&nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f",&nota2);
        
        media = (nota1 + nota2)/2;
        printf("A média do aluno é: %.2f!\n",media);
        
        printf("Digite 1 para continuar ou outro para sair!\n");
        scanf("%d",&resp);
        
    }
    while(resp == 1);

    return 0;
}
