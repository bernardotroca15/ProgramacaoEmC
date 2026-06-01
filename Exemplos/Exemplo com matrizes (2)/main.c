
#include <stdio.h>

int main()
{
    int Matriz[5][3];
    int i, j;
    
    //preenche toda a matriz com zeros
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            Matriz[i][j] = 0;
        }
    }
    
    //atribui 1 valor especifico:
    Matriz[0][1] = 15;
    
    //exibe o resultado
    printf("Matriz com valor 15 na posição [0][1]:\n");
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 3; j++) {
            printf("%d", Matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
