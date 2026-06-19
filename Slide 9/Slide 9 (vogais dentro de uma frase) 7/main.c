
#include <stdio.h>
//biblioteca de string
#include <string.h>
//biblioteca de tipos
#include <ctype.h>

int main()
{
    char frase[50];
    int counter = 0;
    int counterVogal = 0;
    
    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    
    int tamanho = strlen(frase);
    if(tamanho > 0 && frase[tamanho - 1] == '\n')
    {
        frase[tamanho - 1] == '\0';
    }
    
    for (counter; counter < tamanho; counter++) 
    {
        // Converte o caractere atual para minúsculo antes de testar
        char letraAtual = tolower(frase[counter]);
        // Verifica se a letra atual é uma vogal
        if (letraAtual == 'a' || letraAtual == 'e' || letraAtual == 'i' || letraAtual == 'o' || letraAtual == 'u') 
        {
            counterVogal++;
        }
    }
    
    // Mostra o resultado final
    printf("A frase contem %d vogais.\n", counterVogal);

    return 0;
}
