
#include <stdio.h>
//constante de tamanho do vetor
#define TAM_MAX 10

int main()
{
    //o contador
    int i;
    //o vetor
    int impar[TAM_MAX];
    //variavel que recebe os valores impares
    int numimpar;
    
    //laço loop para pedir os valores
    for (i = 0; i < TAM_MAX; i++) 
    {
        printf("Digite um número:\n"); //pede o valor de cada item do vetor
        scanf("%d",&impar[i]);
    }
    //laço loop para imprimir os valores ímpares!
    for (int i = 0; i < TAM_MAX; i++) {
        if (impar[i] % 2 != 0 && impar[i] > 0)
        {
            numimpar = impar[i];
            printf("Valor impar positivo: %d \n", numimpar);
        }
    }

    
    return 0;
}