/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//prévia da função
float Media (float nota1, float nota2, float nota3, char metodo);

//função principal
int main()
{
    float nota1, nota2, nota3; //as notas em float
    char metodo; //o metodo de calcular a media (ponderada ou aritmetica)
    
    printf("Calculadora de média de 3 notas! \n");
    printf("Digite A para aritmética e P para ponderada!\n");
    printf("Digite o tipo de média que deseja calcular:\n"); //pede o metodo
    scanf("%c",&metodo);
    
    if(metodo != 'A' && metodo != 'P') //se não for um metodo válido, opção inválida!
    {
        printf("Digite uma Opção Válida!");
        return 1;
    }
    

    printf("Digite a primeira nota: \n"); //pede a nota 1
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: \n"); //pede a nota 2
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: \n"); //pede a nota 3
    scanf("%f", &nota3);
    
    printf("A média é %.2f", Media(nota1, nota2, nota3, metodo)); //exibe a média

    return 0;
}

//função para calcular média
float Media (float nota1, float nota2, float nota3, char metodo)
{
    float media;
    
    if (metodo == 'A') //aritmetica
    {
        media = (nota1 + nota2 + nota3) / 3;
        return media;
    }
    else if (metodo == 'P') //ponderada
    {
        media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        return media;
    }
}