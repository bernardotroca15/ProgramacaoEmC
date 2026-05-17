/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float preco;//variavel float para o preço
    int formadepagamento;//variavel int para determinar a forma de pagamento
    
    printf("Qual foi o preço?");//pede o preco
    scanf("%f",&preco);//escaneia o preco
    
    printf("Qual a forma de pagamento? 5 para crédito ou 6 para à vista!");//pede a forma de pagamento
    scanf("%d",&formadepagamento);//escaneia a forma de pagamento
    
    if (preco && formadepagamento == 5)//se tiver digitado o preço e for crédito...
    {
        preco = preco - (0.1*preco);//desconto de 10%
        printf("O preco com desconto no crédito é %.2f reais", preco);//exibe o valor com desconto de 10%
    }
    else //se for à vista...
    {
        preco = preco -(0.2*preco);//desconto de 20%
        printf("O preco com desconto à vista é de %.2f reias", preco);//exibe o valor com o desconto de 20%
    }
    
    return 0;
}
