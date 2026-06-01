//define o tamanho dos vetores
#define TAM_MAX 20
#include <stdio.h>

int main()
{
    //varaiaveis inteiras
    int valordecrescente[TAM_MAX];
    int counter,num,aux;
    
    //colocando os valores do vetor
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite o %dº número:\n", counter + 1);
        scanf("%d", &valordecrescente[counter]);
    }
    
    //coloca em ordem decrescente
    for (counter = 0; counter < TAM_MAX - 1; counter++) {
        for (num = 0; num < TAM_MAX - counter - 1; num++) {
            // Se o elemento atual for menor que o proximo, eles trocam de lugar
            if (valordecrescente[num] < valordecrescente[num + 1]) {
                aux = valordecrescente[num];
                valordecrescente[num] = valordecrescente[num + 1];
                valordecrescente[num + 1] = aux;
            }
        }
    }
    
    //exibe o resultado
    printf("Valores em ordem decrescente:\n");
    
    for(counter = 0 ; counter < TAM_MAX ;counter++)
    {
        printf("%d ",valordecrescente[counter]);
    }
    printf("\n");
    
    return 0;
}
