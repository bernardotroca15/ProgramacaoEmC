//define o tamanho dos vetores
#define TAM_MAX 10

#include <stdio.h>

int main()
{
    //varaiaveis inteiras
    int valores[TAM_MAX];
    int numporcinco[TAM_MAX];
    int counter, nums, aux;
    
    //colocando os valores do vetor
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite o %dº número:\n", counter + 1);
        scanf("%d", &valores[counter]);
    }
    
    //verifica se é deivisivel por 5
    for(counter = 0;counter < TAM_MAX;counter++)
    {
        if(valores[counter] % 5 == 0)
        {
            numporcinco[counter] = valores[counter];
            nums++;
        }
        else{
            numporcinco[counter] = 0;
        }
    }
    
        //coloca em ordem crescente
    for (counter = 0; counter < TAM_MAX - 1; counter++) {
        for (nums = 0; nums < TAM_MAX - counter - 1; nums++) {
            // Se o elemento atual for maior que o proximo, eles trocam de lugar
            if (numporcinco[nums] > numporcinco[nums + 1]) {
                aux = numporcinco[nums];
                numporcinco[nums] = numporcinco[nums + 1];
                numporcinco[nums + 1] = aux;
            }
        }
    }
    
    //exibe o resultado
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("%d ",numporcinco[counter]);
    }
    
    return 0;
}