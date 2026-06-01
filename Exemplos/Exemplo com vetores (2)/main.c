
#include <stdio.h>

int main()
{
    int Vetor[5];
    int i;
    
    //preenchendo o vetor  com numeros de 5 a 1
    for(i=0;i<5;i++)
    {
        Vetor[i] = 5 - i;
    }
    //exibindo o Vetor
    
    printf("Vetor com valores de 5 a 1:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",Vetor[i]);
    }
    printf("\n");
    
    return 0;
}
