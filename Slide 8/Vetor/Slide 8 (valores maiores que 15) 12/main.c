
#include <stdio.h>
//definindo o tamanho do vetor
#define TAM_MAX 35

int main()
{
    //o vetor
    int vetNums[TAM_MAX];
    int num15[TAM_MAX];
    int counter;
    int aux, j;
    
    //recebendo os valores do vetor
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite o %dº valor:", counter + 1);
        scanf("%d",&vetNums[counter]);
    }
    
    //verificando se é maior que 15
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        if(vetNums[counter] > 15)
        {
            num15[counter] = vetNums[counter];
        }
        else
        {
            num15[counter] = 0;
        }
    }
    
    //coloca em ordem crescente
    for (counter = 0; counter < TAM_MAX - 1; counter++) {
        for (j = 0; j < TAM_MAX - counter - 1; j++) {
            // Se o elemento atual for maior que o proximo, eles trocam de lugar
            if (num15[j] > num15[j + 1]) {
                aux = num15[j];
                num15[j] = num15[j + 1];
                num15[j + 1] = aux;
            }
        }
    }
    
    //exibe o resultado:
    printf("Valores maiores que 15 em ordem crescente: \n");
    
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("%d ",num15[counter]);
    }

    return 0;
}