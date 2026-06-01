
#include <stdio.h>
#define TAM_MAX 10

int main()
{
    int vendedores[TAM_MAX];
    int counter;
    int  cd,salario;
    
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite a quantidade de CDs vendidas pelo %dº vendedor:", counter + 1);
        scanf("%d",&vendedores[counter]);
    }
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        cd = vendedores[counter];
        
        salario = 300 + (0.1 * (20 * cd));
        
        printf("O salário do %dº vendedor é %d! \n", counter + 1, salario);
    }
    
    return 0;
}
