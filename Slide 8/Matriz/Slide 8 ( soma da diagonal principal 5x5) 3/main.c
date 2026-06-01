
#include <stdio.h>
//define o tamanho da matriz
#define TAM 5

int main()
{
    //a matriz 
    int matriz[TAM][TAM];
    int linha, coluna;
    int diagonal = 0;
    
    //preenche a matriz
    for(linha = 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        
        {
            printf("Digite o valor da matriz[%d][%d]: \n", linha, coluna);
            scanf("%d",&matriz[linha][coluna]); 
        }
    }
    
    // Soma a diagonal principal
    for(linha = 0; linha < TAM; linha++)
    {
        diagonal += matriz[linha][linha];
    }
    
    //exibe a soma
    printf("A soma da diagonal principal é : %d", diagonal);

    return 0;
}
