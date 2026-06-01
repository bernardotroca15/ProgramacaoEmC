//define o tamanho dos vetores
#define TAM_MAX 10

#include <stdio.h>

int main()
{
    //varaiaveis inteiras
    int valores[TAM_MAX];
    int numimpar[TAM_MAX];
    int counter, nums, aux;
    
    //colocando os valores do vetor
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite o %dº número:\n", counter + 1);
        scanf("%d", &valores[counter]);
    }
    
    //verifica se é deivisivel por 5
    for(counter = 0;counter < TAM_MAX; counter++)
    {
        if(valores[counter] % 2 != 0)
        {
            numimpar[counter] = valores[counter];
            nums++;
        }
        else{
            numimpar[counter] = 0;
        }
    }
    
        //coloca em ordem crescente
    for (counter = 0; counter < TAM_MAX - 1; counter++) {
        for (nums = 0; nums < TAM_MAX - counter - 1; nums++) {
            // Se o elemento atual for maior que o proximo, eles trocam de lugar
            if (numimpar[nums] < numimpar[nums + 1]) {
                aux = numimpar[nums];
                numimpar[nums] = numimpar[nums + 1];
                numimpar[nums + 1] = aux;
            }
        }
    }
    
    //exibe o resultado
    printf("Valores ímpares em ordem decrescente:\n");
    
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("%d ",numimpar[counter]);
    }
    
    return 0;
}