/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float dinheiroconta = 1000, rendimento; //variaveis float para o dinheiro e o rendimento
    int counter = 1; //variavel inteira para o contador de anos
    
    for (counter; counter <= 10; counter++) //enquanto anos n chegar em 10...
    {
        rendimento = 0.15; //rendimento = 15%
        dinheiroconta = (dinheiroconta + (dinheiroconta * rendimento)) + 100; //calcula o dinheiro na conta com os rendimentos de 1 ano
        printf("O dinheiro na conta no %dº ano é R$%.2f \n",counter, dinheiroconta); //exibe o dinheiro na conta com os rendimentos por ano
    }

    return 0;
}
