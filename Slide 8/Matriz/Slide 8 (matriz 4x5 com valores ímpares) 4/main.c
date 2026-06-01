
#include <stdio.h>
#define LINE 4
#define COLUM 5

int main()
{
    //matriz
    int matriz[LINE][COLUM];
    int linha, coluna;
    int linimpar;
    
    //preenchendo a matriz com os valores do usuario
    for (linha = 0; linha < LINE; linha ++)
    {
        for(coluna = 0; coluna< COLUM; coluna++)
        {
            printf("Digite o elemento da matriz [%d][%d]:\n",linha,coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    printf("Linhas cujo os elementos são todos impares: \n");
    
    for (linha = 0; linha < LINE; linha++) {
        //deixa a linha como impar por padrão
        linimpar = 1;
        
        for (coluna = 0; coluna < COLUM; coluna++) {
            // Descobre se a linha tem elemento par
            if (matriz[linha][coluna] % 2 == 0) {
                //transforma a linha em par se for divisivel por 2
                linimpar = 0; 
                break; 
            }
        }
        
        //exibe a linha em que todos os elementos são ímpares:
        if (linimpar == 1) {
            printf("Linha %d\n", linha);
        }
    }
    
    return 0;
}
