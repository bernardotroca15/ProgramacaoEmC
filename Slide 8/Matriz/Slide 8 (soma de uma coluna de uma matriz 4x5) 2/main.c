
#include <stdio.h>

//definindo o tamanho da matriz
#define COLUM 5
#define LINE 4

int main()
{
    //matriz
    int matriz[LINE][COLUM];
    int linha, coluna;
    //valor do ussuario para somar uma coluna
    int valcolum;
    //soma da coluna
    int somacoluna = 0;
    
    //preenche os valores da matrix
    for(linha = 0; linha < LINE; linha++)
    {
        for(coluna = 0; coluna < COLUM; coluna++)
        {
            printf("Digite o valor da matriz [%d][%d] \n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    //recebe o valor do usuario
    printf("Digite a coluna que deseja somar:\n");
    scanf("%d",&valcolum);
    
    //verifica se é uma coluna válida!
    if(valcolum > COLUM || valcolum < 0)
    {
        printf("Digite uma coluna válida!");
    }
    
    //faz a soma da coluna
    for(linha = 0; linha < LINE; linha++)
    {
        somacoluna += matriz[linha][valcolum];
    }
    
    //exibe o resultado
    printf("A soma da coluna %d é : %d", valcolum, somacoluna);
    

    return 0;
}