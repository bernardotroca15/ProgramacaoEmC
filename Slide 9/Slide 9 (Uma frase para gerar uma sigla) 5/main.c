#include <stdio.h>
//biblioteca de string
#include <string.h>
//biblioteca de tipo
#include <ctype.h>

int main() 
{
    char frase[100];
    char sigla[20]; // Array para armazenar a sigla gerada
    int j = 0;  // Índice para a string da sigla

    printf("Digite uma frase para gerar a sigla:\n");
    fgets(frase, sizeof(frase), stdin);

    // Remove o '\n' do final da frase se ele existir
    int tamanho = strlen(frase);
    if (tamanho > 0 && frase[tamanho - 1] == '\n') 
    {
        frase[tamanho - 1] = '\0';
        tamanho--; // Atualiza o tamanho após remover o '\n'
    }

    // Percorre a frase para encontrar o início das palavras
    for (int i = 0; i < tamanho; i++) 
    {
        // Se for o primeiro caractere e não for um espaço, faz parte da sigla
        if (i == 0 && frase[i] != ' ') 
        {
            sigla[j] = toupper(frase[i]);
            j++;
        }
        // Se o caractere atual for um espaço, o próximo caractere (se não for espaço) é o início de uma palavra
        else if (frase[i] == ' ' && frase[i + 1] != ' ' && frase[i + 1] != '\0') 
        {
            sigla[j] = toupper(frase[i + 1]);
            j++;
        }
    }

    // IMPORTANTE: Adiciona o caractere nulo para finalizar a string da sigla
    sigla[j] = '\0';

    // Mostra o resultado
    printf("A sigla gerada é: %s\n", sigla);

    return 0;
}