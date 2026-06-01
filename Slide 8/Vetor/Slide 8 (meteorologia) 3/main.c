
#include <stdio.h>
//tamanho do vetor
#define TAM_MAX 30

int main()
{
    //vetor das temperaturas
    double tempM[TAM_MAX];
    double maior;
    int counter, dia;
    
    //loop para pedir as temperaturas
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite a temperatura média do dia %d:", counter + 1);
        scanf("%lf",&tempM[counter]);
    }
    
    //a maior é por padrão a primeira
    maior = tempM[0];
    dia =  1;
    
    //loop para achar a maior temperatura e o dia correspondente
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        if (tempM[counter] > maior)
        {
            maior = tempM[counter];
            dia = counter + 1;
        }

    }
    
    //exibe o resultado
    printf("A maior temperatura ocorreu no dia %d e foi de %.1lfºC!", dia, maior);
    return 0;
}
