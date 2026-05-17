/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao; //variavel da opcao
    float lado, area, raio; //variavel float de calcular  a  area do quadrado e do circulo
    
    printf("1.Cálculo da área do quadrado\n2.Cálculo da área do círculo\nOpção:");
    scanf("%d", &opcao);//pede a opção
    
    switch(opcao) //se opcao
    {
        //caso do quadrado
        case 1: printf("Digite o lado do quadrado:\n");//pede o lado do quadrado
                scanf("%f",&lado);
                area = lado*lado; //calcula a area
                printf("A área do quadrado é %.2f unidades de medida", area); //exibe a area
        break;
        
        //caso do circulo
        case 2: printf("Digite o raio do círculo:\n"); //pede o raio do circulo
                scanf("%f",&raio);
                area = 3.1415*(raio*raio); //calcula a area
                printf("A área do círculo é %.2f unidades de medida", area); //exibe a area
        break;
        
        default:printf("OPÇÃO INVÁLIDA.");  //se nenhuma das opcoes...opcao INVÁLIDA!
    }

    return 0;
}
