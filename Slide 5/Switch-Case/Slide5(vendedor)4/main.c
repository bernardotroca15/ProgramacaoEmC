/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo, quantidade;//valores inteiros
    float preco;//float do preço
    
    printf("Qual o código do produto? 11, 22, 33 ou 44!\n");
    scanf("%d",&codigo); //pede o codigo do produto
    
    printf("Qual foi a quantidade comprada?\n");
    scanf("%d", &quantidade); //pede a quantidade
    
    switch(codigo)
    {
        case 11:preco = 5.3 * quantidade; //se codigo = 11, preco = 5.3 * quantidade
                printf("O valor devido é %.2f reais!", preco);
                break;
            
        case 22:preco = 6.0 * quantidade; //se codigo = 22, preco = 6.0 * quantidade
                printf("O valor devido é %.2f reais!", preco);
                break;
            
        case 33:preco = 3.2 * quantidade; //se codigo = 33, preco = 3.2 * quantidade
                printf("O valor devido é %.2f reais!", preco);
                break;
            
        case 44:preco = 2.5 * quantidade; //se codigo = 44, preco = 2.5 * quantidade
                printf("O valor devido é %.2f reais!", preco);
                break;
            
        default:printf("Código inválido!"); //se  nenhuma das opções...código inválido!
    }
    

    return 0;
}
