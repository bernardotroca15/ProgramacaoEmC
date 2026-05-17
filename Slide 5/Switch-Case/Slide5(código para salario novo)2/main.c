/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cargo; //variavel de cargo
    float salario, salarionovo, diferenca; //variaveis float 
    
    printf("Qual seu salario?\n"); //pede o salario
    scanf("%f",&salario);
    
    printf("Qual seu cargo? 101 para Gerente, 102 para Engenheiro e 103 para Técnico!\n"); //pede o cargo
    scanf("%d",&cargo);
    
    switch(cargo) //se cargo...
    {
        case 101: salarionovo = salario + (0.1*salario); //cargo de gerente, aumenta 10%
                  diferenca = salarionovo - salario;
                  printf("Seu salário antigo é %.2f reais\n", salario);
                  printf("Seu salário atual é %.2f reais\n", salarionovo);
                  printf("A diferença é %.2f reais\n", diferenca);
                  break;
                  
        case 102: salarionovo = salario + (0.2*salario); //cargo de Engenheiro, aumenta 20%
                  diferenca = salarionovo - salario;
                  printf("Seu salário antigo é %.2f reais \n", salario);
                  printf("Seu salário atual é %.2f reais \n", salarionovo);
                  printf("A diferença é %.2f reais \n", diferenca);
                  break;
                  
        case 103: salarionovo = salario + (0.3*salario); //cargo de Técnico, aumenta 30%
                  diferenca = salarionovo - salario;
                  printf("Seu salário antigo é %.2f reais \n", salario);
                  printf("Seu salário atual é %.2f reais \n", salarionovo);
                  printf("A diferença é %.2f reais \n", diferenca);
                  break;
                  
        default: salarionovo = salario + (0.4*salario); //se o cargo não está à mostra, aumenta 40%
                 diferenca = salarionovo - salario;
                 printf("Seu salário antigo é %.2f reais \n", salario);
                 printf("Seu salário atual é %.2f reais \n", salarionovo);
                 printf("A diferença é %.2f reais \n", diferenca);
    }

    return 0;
}
