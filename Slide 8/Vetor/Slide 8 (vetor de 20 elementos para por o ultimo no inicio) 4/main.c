
#include <stdio.h>
//o tamanho do vetor
#define TAM_MAX 20

int main()
{
    //o vetor 
    int vetEl[TAM_MAX];
    //o contador
    int counter;
    //o ultimo e o primeiro valor
    int ultimo, primeiro;
    
    //laço para pedir os valores do vetor
    for (counter = 0; counter < TAM_MAX; counter++) 
    {
        printf("Digite o %dº número:\n",counter + 1);
        scanf("%d", &vetEl[counter]);
        
        primeiro = vetEl[0];
        ultimo = vetEl[19];
        
    }
    
    //o primeiro vetor
    printf("O primeiro vetor:\n");
    
    for (counter = 0; counter < TAM_MAX; counter++)
    {
        printf("%d ",vetEl[counter]);
    }
    
    // osegundo vetor
    printf("\nO segundo vetor:\n");
    
    //laço para imprimir o vetor do jeito que a questão pede
    for (counter = 1; counter < TAM_MAX; counter++)
    {
        printf("%d ", vetEl[counter]);
    }
    
    //imprime por último o primeiro valor
    printf("%d ", primeiro);
    
    return 0;
}
