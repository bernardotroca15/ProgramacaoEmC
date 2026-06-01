
#include <stdio.h>

#define TAM_MAX 10

int main()
{
    double Vet1[TAM_MAX], Vet2[TAM_MAX], VetCopia[TAM_MAX * 2];
    int i;
    
    printf("Digite %d valores para o Vet1: \n", TAM_MAX);
    for(i = 0; i < TAM_MAX; i++)
    {
        printf("Vet1[%d]: ", i);
        scanf("%lf",&Vet1[i]);
    }
    
    printf("Digite %d valores para o Vet2: \n", TAM_MAX);
    for(i = 0; i < TAM_MAX; i++)
    {
        printf("Vet2[%d]: ", i);
        scanf("%lf",&Vet2[i]);
    }
    
    //Copiando o vet1 para a cópia
    for(i = 0; i < TAM_MAX; i++)
    {
        VetCopia[i] = Vet1[i];
    }
    
    //Copiando o vet2 para a segunda metade da cópia
    for(i = 0; i < TAM_MAX; i++)
    {
        VetCopia[i + TAM_MAX] = Vet2[i];
    }
    
    printf("\nVetor Cópia (vet1 + vet2): \n");
    for(i = 0; i < TAM_MAX * 2; i++)
    {
        printf("Vet2[%d]: ", i);
        scanf("%.2f",&VetCopia[i]);
    }
    printf("\n");
    return 0;
}
