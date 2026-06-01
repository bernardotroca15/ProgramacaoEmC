
#include <stdio.h>

//define o tamanho do vetor
#define TAM_MAX 20

int main()
{
    float vetNotas[TAM_MAX];
    float soma = 0.0, media;
    int N, counter;
    
    //leitura dos valores
    for(counter = 0; counter < TAM_MAX; counter++)
    {
        printf("Digite a %dª nota:", counter + 1);
        scanf("%f",&vetNotas[counter]);
    }
    
    // Leitura do valor N com validação
    do {
        printf("\nDigite o valor de N (entre 1 e 20): ");
        scanf("%d", &N);
        if (N < 1 || N > TAM_MAX) {
            printf("Por favor, insira um valor válido para N (de 1 a 20).\n");
        }
    } while (N < 1 || N > TAM_MAX);

    // Ordenação do vetor em ordem decrescente (Bubble Sort)
    for (counter = 0; counter < TAM_MAX - 1; counter++) {
        for (int j = 0; j < TAM_MAX - counter - 1; j++) {
            if (vetNotas[j] < vetNotas[j + 1]) {
                // Troca os elementos de lugar
                float temp = vetNotas[j];
                vetNotas[j] = vetNotas[j + 1];
                vetNotas[j + 1] = temp;
            }
        }
    }

    // Cálculo da soma das N maiores notas
    for (counter = 0; counter < N; counter++) {
        soma += vetNotas[counter];
    }

    // Cálculo e exibição da média
    media = soma / N;
    printf("\nA média das %d maiores notas é: %.2f\n", N, media);

    return 0;
}
