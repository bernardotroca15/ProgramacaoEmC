
#include <stdio.h>

#define TAM_MAX 10

int main()
{
    double VetReais[TAM_MAX];
    int i;
    
    //Preenchendo vetor com valores decrescentes
    for(i = 0;i<TAM_MAX;i++)
    {
        VetReais[i] = TAM_MAX - i;
    }
    
    //exibindo o vetor
    printf("Vetor de reais com valores decrescentes: \n");
    for(i = 0;i<TAM_MAX;i++)
    {
        printf("%.1lf ", VetReais[i]);
    }
   
    printf("\n");

    return 0;
}
