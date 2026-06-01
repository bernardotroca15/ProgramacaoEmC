
#include <stdio.h>

#define TAM_MAX 10

int main()
{
    double Vetl[TAM_MAX];
    int i;
    
    printf("Digite %d valores reais: \n", TAM_MAX);
    
    //leitura dos valores
    for(i=0;i<TAM_MAX;i++)
    {
        printf("Valor %d:", i + 1);
        scanf("%lf",&Vetl[i]);
    }
    
    //Exibindo os valores lidos:
    printf("\n Valores digitados:\n");
    for(i = 0; i <TAM_MAX; i++){
        printf("%.2lf ", Vetl[i]);
    }
    printf("\n");

    return 0;
}
