
#define TAM 25
#include <stdio.h>

int main()
{
    int matriz[TAM][TAM];
    int linha, coluna;
    int somalinha = 0, somacoluna = 0;
    
    for(linha= 0; linha < TAM; linha++)
    {
        for(coluna = 0; coluna < TAM; coluna++)
        {
            printf("Preencha a matriz[%d][%d]:\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            
            if (linha % 2 == 0)
            {
                somalinha = somalinha + matriz[linha][coluna];
            }
            if (coluna % 2 == 0)
            {
                somacoluna = somacoluna + matriz[linha][coluna];
            }
        }
    }
    
    printf("A soma das linhas pares é %d e das colunas pares é %d !", somalinha, somacoluna);

    return 0;
}
