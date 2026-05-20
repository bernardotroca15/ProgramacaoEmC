
#include <stdio.h>
//biblioteca de valores booleanos
#include <stdbool.h>

//prévia da função
bool imparouPar(int num);

//função principal
int main()
{
    int num;
    
    printf("Digite um numero e direi se é ímpar ou par:\n"); //pede o numero
    scanf("%d",&num);
    printf("0 é ímpar! 1 é par!\n");
    
    printf("Saída: %d", imparouPar(num));

    return 0;
}

//função que determina se é ímpar ou par
bool imparouPar(int num)
{
    if (num % 2 == 0) //se for par, retorna verdadeiro
    {
        return true;
    }
    else //senão, retorna falso
    {
        return false;
    }
}