
#include <stdio.h>

//prévia da função
int quantidadeDivisores(int num);

int main()
{
    int num; //variavel do numero
    
    printf("Digite um número: \n"); //pede o numero
    scanf("%d",&num);
    
    //exibe a quantidade de divisores
    printf("A quantidade de divisores desse numero é: %d \n", quantidadeDivisores(num)); 
    printf("Considerando o prório número como divisor!\n");
    
    return 0;
}
//função para achar a quantidade de divisores
int quantidadeDivisores(int num)
{
    int counter = 1; //contador
    int divisores = 0; //quantidade de divisores
    
    for(counter; counter <= num; counter++)
    {
        if (num % counter == 0)
        {
            divisores++;
        }
    }
    return divisores;
}
