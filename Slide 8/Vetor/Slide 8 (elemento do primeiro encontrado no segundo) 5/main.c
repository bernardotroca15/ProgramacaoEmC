
#include <stdio.h>
//definindo o tamanho dos vetores:
#define TAM_MAX 20

int main()
{
    //os dois vetores
    int vet1[TAM_MAX];
    int vet2[TAM_MAX];
    //numeros do vetor 1 e numeros do vetor 2
    int num1, num2;
    
    printf("O primeiro vetor:\n");
    
    //laço loop para os valores do vetor 1
    for(num1 = 0; num1 < TAM_MAX; num1++)
    {
        printf("Digite o %dº valor do vetor 1:\n",num1 + 1);
        scanf("%d",&vet1[num1]);
    }
    
    printf("O segundo vetor:\n");
    
    //laço loop para os valores do vetor 2
    for(num2 = 0; num2 < TAM_MAX; num2++)
    {
        printf("Digite o %dº valor do vetor 2:\n",num2 + 1);
        scanf("%d",&vet2[num2]);
    }
    
    //laço para verificar se A repete em B!
    for(num1 = 0; num1 < TAM_MAX; num1++)
    {
        int count = 0;
        
        for(num2 = 0; num2 < TAM_MAX; num2++)
        {
            if (vet1[num1] == vet2[num2])
            {
                count++;
            }
        }
        
        //exibe o resultado:
        printf("Elemento %d aparece %d vezes\n", vet1[num1], count);
    }
    return 0;
}