
#include <stdio.h>
//biblioteca de matematica
#include <math.h>
//biblioteca de valores booleanos
#include <stdbool.h>

//prévia da função
bool Primo(int numero);

//função principal
int main()
{
    int numero;
    
    printf("Digite um numero:\n");
    scanf("%d",&numero);
    
    printf("O valor é %d \n", Primo(numero));
    
    return 0;
}

//funcão de determinar se é Primo
bool Primo(int numero)
{
    //não existe numero menor que 2 primo
    if (numero < 2)
    {
        return false;
    }
    //2 é primo
    if (numero == 2)
    {
        return true;
    }
    //nenhum numero par acima de 2 é primo
    if(numero > 2 && numero % 2 == 0)
    {
        return false;
    }
    //procura os divisores dos numeros
    int limite = (int)sqrt(numero);
    for (int i = 3; i <= limite; i += 2)
    {
        if(numero % i == 0)
        {
            return false;
        }
    }
    return true;
}