/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int combustivel;//valor inteiro (tipo de combustivel)
    float preco, litros; //valor float (preço e litros)
    float alcool = 4.39; //preco do alcool
    float gasolina = 5.29; //preco da gasolina
    
    printf("Qual foi o combustivel colocado? 1 - Alcool 2 - Gasolina!\n");
    scanf("%d",&combustivel); //pede o combustivel
    
    printf("Quantos litros foram vendidos?\n");
    scanf("%f", &litros); //pede a quantidade  de litros
    
    switch(combustivel)
    {
        case 1: if (litros > 20) //se alcool e litros maior que 20...
        {
            preco = (litros*alcool)-(0.05*(litros*alcool)); //preco = litros de alcool - 5% de desconto
            printf("O valor dos %.2f litros de alcool é %.2f reais!\n", litros, preco);
        }
        else 
        {
            if (litros <= 20) // se alcool e litros menor que 20...
            {
                preco = (litros*alcool)-(0.03*(litros*alcool)); //preco = litros de alcool - 3% de desconto
                printf("O valor dos %.2f litros de alcool é %.2f reais!\n", litros, preco);
            }
        }
        break;
        
        case 2: if (litros > 15) //se gasolina e litros maior que 15...
        {
            preco = (litros*gasolina)-(0.08*(litros*gasolina)); //preco = litros de gasolina - 8%
            printf("O valor dos %.2f litros de Gasolina é %.2f reais!\n", litros, preco);
        }
        else
        {
            if (litros <= 15) //se gasolina e litros menor que 15...
            {
                preco = (litros*alcool)-(0.035*(litros*gasolina)); //preco = litros de gasolina - 3,5%
                printf("O valor dos %.2f litros de Gasolina é %.2f reais!\n", litros, preco);
            }
        }
        break;
        
        default: printf("Digite um valor válido! 1 ou 2!\n"); //se não for nenhuma das opções, é um valor inválido!
    }

    return 0;
}
