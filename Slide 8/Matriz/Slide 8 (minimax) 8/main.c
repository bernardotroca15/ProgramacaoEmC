
#define TAM 10
#include <stdio.h>

//previa da função
int Minmax(int tamanho, int matriz[tamanho][tamanho]);

int main()
{
    int tamanho = TAM;
    int matriz[tamanho][tamanho];
    int linha, coluna;
    
    //preenche a matriz
    for(linha = 0; linha < tamanho; linha++)
    {
        for(coluna = 0; coluna < tamanho; coluna++)
        {
            printf("Digite o valor da matriz [%d] [%d]:\n", linha, coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }
    
    printf("O termo minimax é: %d !", Minmax(tamanho, matriz));

    return 0;
}

//função para descobrir o minimax
int Minmax(int tamanho, int matriz[tamanho][tamanho])
{
    int linha, coluna;
    int minimax;
    
    for(linha = 0; linha< tamanho; linha++)
    {
        int max_linha = matriz[linha][0];
        for(coluna = 1; coluna < tamanho; coluna++)
        {
            if(matriz[linha][coluna] > max_linha)
            {
                max_linha = matriz[linha][coluna];
            }
        }
        
        if(linha == 0)
        {
            minimax = max_linha;
        }
        else
        {
            if(max_linha < minimax)
            {
                minimax = max_linha;
            }
        }
        
    }
    return minimax;
}