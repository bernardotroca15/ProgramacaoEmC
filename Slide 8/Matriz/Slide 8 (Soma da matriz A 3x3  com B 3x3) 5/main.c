
#include <stdio.h>
//definindo o tamanho das matrizes
#define TAM 3

int main()
{
    //matrizes
    int matrizA[TAM][TAM];
    int matrizB[TAM][TAM];
    //matriz soma
    int matrizS[TAM][TAM]; 
    //linhas e colunas
    int linha, coluna;
    
    printf("Matriz A: \n");
    //preenche a matriz A
    for(linha = 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        {
            printf("Digite os valores da matriz A [%d][%d]: \n", linha, coluna);
            scanf("%d",&matrizA[linha][coluna]);
        }
    }
    
    printf("Matriz B: \n");
    //preenche a matriz B
    for(linha = 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        {
            printf("Digite os valores da matriz B [%d][%d]: \n", linha, coluna);
            scanf("%d",&matrizB[linha][coluna]);
        }
    }
    
    //calcula os valores da matriz Soma
    for(linha = 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        {
            matrizS[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
        }
    }
    
    printf("A matriz soma: \n");
    
    //exibe o resultado:
    for(linha = 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        {
            printf("%d ", matrizS[linha][coluna]);
        }
    }
    return 0;
}