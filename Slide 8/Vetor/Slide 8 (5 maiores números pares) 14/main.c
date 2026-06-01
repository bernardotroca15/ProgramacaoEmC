
#include <stdio.h>
//define o tamanho dos vetores
#define TAM_MAX 30

int main()
{
    //vetor dos valores do usuario!
    int numeros[TAM_MAX];
    //vetor dos valores pares!
    int pares[TAM_MAX];
    int qtd_pares = 0;
    int counter, counter1, temp;
    
    //pede os valores do vetor
    printf("Digite os valores do 1º vetor: \n");
    
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite o %dº número:\n", counter + 1);
        scanf("%d",&numeros[counter]);
        
        if(numeros[counter] % 2 == 0)
        {
            pares[qtd_pares] = numeros[counter];
            qtd_pares++;
        }
    }
    
    //para caso não haja valores pares 
    if(qtd_pares == 0)
    {
        printf("Não há valores pares!\n");
    }
    
    //ordenando em ordem decrescente
    for(counter = 0; counter < qtd_pares; counter ++)
    {
        for(counter1 = 0; counter1 < qtd_pares - counter - 1; counter1++)
        {
            if(pares[counter1] < pares[counter1 + 1])
            {
                temp = pares[counter1];
                pares[counter1] = pares[counter1 + 1];
                pares[counter1 + 1] = temp;
            }
        }
    }
    
    //exibindo o resultado
    printf("Os 5 maiores números pares: \n");

    //exibe os 5 maiores numeros pares:
    for(counter = 0; counter < qtd_pares; counter++)
    {
        if(qtd_pares >= 5)
        {
            printf("%d maior par: %d \n",counter + 1, pares[counter]);   
        }
        
        else if (qtd_pares < 5)
        {
            printf("Apenas %d numero(s) par(es) foi/foram digitado(s)\n", qtd_pares);
        }
    
    }
    

    return 0;
}