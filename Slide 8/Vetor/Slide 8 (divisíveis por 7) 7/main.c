//tamanho máximo
#define TAM_MAX 5
#include <stdio.h>

int main()
{
    //vetor prinicpal
    int vet[TAM_MAX];
    //vetor dos divisiveis por sete 
    int vetporsete[TAM_MAX];
    //valores dos numeros e do contador
    int  num, counter;
    
    
    for(counter = 0;  counter < TAM_MAX; counter++)
    {
        printf("Digite um número: \n");
        scanf("%d",&vet[counter]);
        
        num = vet[counter];
        
        if (num == -999)
        {
            printf("Leitura finalizada!");
            break;
        }
        
        if(num % 7 == 0)
        {
            vetporsete[counter] = num;
        }
        else
        {
            vetporsete[counter] = 0;
        }
    }
    
//exibe o resultado:
    printf("Os valores divisíveis por sete é:\n");
        
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("%d ", vetporsete[counter]);
    }

    
    return 0;
}
