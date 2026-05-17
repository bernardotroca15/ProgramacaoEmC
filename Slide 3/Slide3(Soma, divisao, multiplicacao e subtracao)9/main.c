/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float variavelA, variavelB, soma, divisao, subtracao, multiplicacao; //criando as variaveis
    
    printf("Digite o primeiro número "); //pede a variavel A
    scanf("%f", &variavelA);//escaneia a variavel A
    
    printf("Digite o segundo número "); //pede a variavel B
    scanf("%f", &variavelB);//escaneia a variavel B
    
    soma = variavelA + variavelB;//soma os dois valores
    subtracao = variavelA - variavelB;//diminui A de B
    multiplicacao = variavelA * variavelB;//multiplica A e B
    divisao = variavelA/variavelB;//divide A de B
    
    printf("A soma: %.2f \n", soma);//exibe a soma
    printf("A subtracao: %.2f \n", subtracao);//exibe a subtracao
    printf("A multiplicacao: %.2f \n", multiplicacao);//exibe a multiplicacao
    printf("A divisao: %.2f \n", divisao);//exibe a divisao

    return 0;
}
