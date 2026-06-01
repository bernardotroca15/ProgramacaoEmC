
#include <stdio.h>
//definindo o tamanho da matriz
#define TAM 3

int main()
{
    int matriz[TAM][TAM];
    int linha, coluna;
    int soma = 0;
    
    //preenche as linhas e as colunas
    for(linha = 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        {
            printf("Digite os valores da matriz [%d] [%d]:\n",linha,coluna);
            scanf("%d",&matriz[linha][coluna]);
            
            //somando os elementos
            soma += matriz[linha][coluna];
        }
    }
    
    
    //exibindo a soma:
    printf("A soma dos elementos da matriz é %d", soma);
    
    return 0;
}
