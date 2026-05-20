
#include <stdio.h>
#include <stdbool.h>

//Prévia da função
bool valorPerfeito(int numero);

//função principal
int main()
{
    int numero;
    
    printf("Digite o numero e direi se é perfeito: \n");
    scanf("%d", &numero);
    printf("1 para valor perfeito!\n0 para valor comum!\n");
    
    printf("Saída: %d", valorPerfeito(numero));
    return 0;
}

//função para descobrir se o valor é perfeito
bool valorPerfeito(int numero)
{
    int counter;//contador
    int soma = 0; //soma dos divisores
    
    for(counter = 1; counter < numero; counter++)
    {
        if (numero % counter == 0) //se numero dividir outro e der resto 0, é divisor
        {
            soma = soma + counter;
        }
    }
    if (soma == numero) //se a soma dos divisores for igual ao numero, então o valor é perfeito
    {
        return true; //retorna true
    }
    else 
    {
        return false; //retorna false
    }
}
