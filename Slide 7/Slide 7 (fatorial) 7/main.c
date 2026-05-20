
#include <stdio.h>

//prévia da função
int Fatorial(int num);

//função principal
int main()
{
    int num;
    
    printf("Digite um numero:\n"); //pede o numero
    scanf("%d", &num);
    
    printf("O fatorial é %d \n", Fatorial(num)); //exibe o seu fatorial

    return 0;
}

//função para calcular o fatorial do numero
int Fatorial(int num) 
{
    int resultado = 1; //determina o resultado por padrão igual a 1
    
    for(int counter = 1; counter <= num; counter++) //um loop para achar o fatorial
    {
        resultado = resultado * counter; //vai multiplicando pelos numeros antecessores
    }
    
    return resultado; //retorna o fatorial
}
