/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int formadepagamento; //variavel inteira para determinar a forma de pagamento
    float preco; //variavel do preco
    
    printf("Qual o preço da mercadoria? "); //pede o preco da mercadoria
    scanf("%f", &preco); //escaneia esse preco
    
    printf("Qual foi a forma de pagamento? 5 para 'crédito', 6 para 'à vista' e 7 para '3 parcelas'! "); //pede a forma de pagamento
    scanf("%d", &formadepagamento); //escaneia a forma de pagamento
    
    if (preco && formadepagamento == 5) //se forma de pagamento = 5 (crédito), então...
    {
        preco = preco-(0.1*preco); //preco com 10% de desconto
        printf("O preço com desconto no crédito é de %.2f reias", preco);//exibe o preco com os 10% de desconto
    }
    else //do contrário...
    {
        if (preco && formadepagamento == 6) //se forma de pagamento = 6 (à vista), então...
        {
            preco = preco-(0.2*preco); //preco com 20% de desconto
            printf("O preço com desconto à vista é de %.2f reias", preco); //exibe o preco com os 20% de desconto
        }
        if (preco && formadepagamento == 7) //se forma de pagamento = 7 (3 parcelas), então...
        {
            preco = preco-(0.05*preco); //preco com 5% de desconto
            printf("O preço com desconto em 3 parcelas é de %.2f reias", preco); //exibe o preco com os 5% de desconto
        }
    }

    return 0;
}
