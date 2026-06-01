
#include <stdbool.h>
#include <stdio.h>
//tamanho da matriz
#define TAM 10

//previa da função que verifica se é triangular:
bool Triangular(int tamanho, int matriz[tamanho][tamanho]);

int main()
{
    int tamanho = TAM;
    int matriz[tamanho][tamanho];
    int linha, coluna;
    
    //preenchendo a matriz
    for( linha = 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        {
            printf("Digite os valores da matriz [%d] [%d]: \n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    if (Triangular(tamanho, matriz)){
        printf("A matriz é triangular! \n");
    }
    else
    {
        printf("A matriz não é triangular ! \n");
    }

    return 0;
}

//função que verifica se é triangular 
bool Triangular(int tamanho, int matriz[tamanho][tamanho]) {
    bool superior = true;
    bool inferior = true;

    for (int linha = 0; linha < tamanho; linha++) {
        for (int coluna = 0; coluna < tamanho; coluna++) {
            
            if (linha < coluna && matriz[linha][coluna] != 0) {
                inferior = false; 
            }
            
            if (linha > coluna && matriz[linha][coluna] != 0) {
                superior = false; 
            }
        }
    }
    return superior || inferior;
}