
#include <stdio.h>
#define TAM_MAX 35

int main()
{
    int numeros[TAM_MAX];
    int maiores = 0;
    int valor;
    int counter, counter2, temp;
    
    printf("Digite ate 35 valores inteiros (ou -999 para encerrar):\n");
    
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Valor %d: \n",counter + 1);
        scanf("%d", &valor);
        
        // Verifica a condição de parada
        if (valor == -999) {
            break;
        }
        
        // Armazena apenas os valores maiores que 15
        if (valor > 15) {
            numeros[maiores] = valor;
            maiores++;
        }
    }
    
    for (counter = 0; counter < maiores - 1; counter++) {
        for (counter2 = 0; counter2 < maiores - counter - 1; counter2++) {
            if (numeros[counter2] > numeros[counter2 + 1]) {
                // Troca os elementos de lugar
                temp = numeros[counter2];
                numeros[counter2] = numeros[counter2 + 1];
                numeros[counter2 + 1] = temp;
            }
        }
    }
    
    printf("\nValores maiores que 15 em ordem crescente:\n");
    if (maiores == 0) {
        printf("Nenhum valor maior que 15 foi digitado.\n");
    } else {
        for (counter = 0; counter < maiores; counter++) {
            printf("%d ", numeros[counter]);
        }
        printf("\n");
    }
    return 0;
}
