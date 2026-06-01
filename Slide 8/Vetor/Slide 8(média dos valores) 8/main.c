
#include <stdio.h>
//tamanho dos vetores
#define TAM_MAX 3

int main()
{
    //cria as variaveis
    int media[TAM_MAX];
    int counter, soma = 0, media_resultado, num_acima = 0;
    
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite o %dº número:\n", counter + 1);
        scanf("%d",&media[counter]);
        
        soma =  soma + media[counter];
    }
    
    //calcula a média 
    media_resultado = soma / TAM_MAX;
    
    //calcula o numero de valores acima da media
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        if(media[counter] > media_resultado)
        {
            num_acima++;
        }
    }
    
    //exibe o resultado
    printf("A média dos valores é: %d \n", media_resultado);
    printf("Quantidade de valores acima da média: %d", num_acima);

    return 0;
}
