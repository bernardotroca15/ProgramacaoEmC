
#include <stdio.h>
#define TAM_MAX 10

int main()
{
    double VetReais[TAM_MAX], VetCopia[TAM_MAX];
    int i;
    
    printf("Digite %d valores reais para o vetor original:\n", TAM_MAX);
    for(i = 0; i < TAM_MAX; i++)
    {
        printf("Valor %d: ",i + 1);
        scanf("%lf", &VetReais[i]);
    }
    
    //Copiando os dados
    for(i = 0; i<TAM_MAX; i++)
    {
        VetCopia[i] = VetReais[i];
    }
    
    //exibindo o resultado
    printf("\n Vetor Copia: \n");
    for(i = 0; i<TAM_MAX; i++)
    {
        printf("%.2lf ",VetCopia[i]);
    }
    printf("\n");
    return 0;
}
