
#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    
    //Preenchendo com 30s
    for(i = 0; i < 5; i++)
    {
        vetor[i] = 30;
    }
    
    //exibindo o vetor
    printf("Valor preenchido com 30:\n");
    for(i = 0; i< 5; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("\n");

    return 0;
}
