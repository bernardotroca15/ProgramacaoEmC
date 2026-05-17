/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numerob, numerod = 0; //variaveis inteiras de numero binario e numero decimal
    int base = 1; //a base inteira que será multiplicada por 2 (se numero for maior que 1)
    int resto; //o resto inteiro que será multiplicado pela base e somado ao numero
    
    printf("Digite um numero binário (não negativo):\n"); //pede o numero em binário
    scanf("%d", &numerob);
    
    for(numerob; numerob > 0; numerob = numerob / 10) //repetição para numero maior que 0 para depois dividir por 10
    {
        resto = numerob % 10; //calcula o resto
        numerod = numerod + (resto * base); //calcula o numero em decimal
        base = base * 2; //multiplica a base por 2 para numeros maior que 1 (em decimal)
    }
    
    printf("O numero em decimal é: %d \n", numerod); //exibe o numero em decimal

    return 0;
}
