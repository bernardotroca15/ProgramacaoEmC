
#include <stdio.h>
//constante do tamanho do vetor
#define TAM_MAX 10

int main()
{
    //contador
    int counter;
    //vetor
    int nums[TAM_MAX];
    //ocorrencias
    int ocorrencias = 0;
    
    //laço loop para pedir os valores
    for (counter = 0; counter < TAM_MAX; counter++) {
        printf("Digite o %dº número: \n", counter + 1);
        scanf("%d",&nums[counter]);
    }
    
    //de padrão o primeiro é o menor!
    int menor = nums[0];
    
    //laço loop para achar o menor valor
    for (counter = 0; counter < TAM_MAX; counter++) {
        if (nums[counter] < menor)
        {
            nums[counter] = menor;
        }
    }
    
    //laço loop para achar o numero de ocorrencias
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        if(nums[counter] == menor)
        {
            ocorrencias++;
        }
    }

    printf("O menor número é : %d e seu número de ocorrências é : %d", menor,ocorrencias);

    return 0;
}
