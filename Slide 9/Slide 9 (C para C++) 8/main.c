
#include <stdio.h>
//biblioteca de string
#include <string.h>

int main()
{
    //a variavel da frase e da frase a ser modificada
    char frase[100];
    char frasenova[120] = "";
    
    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    
    //remove o \n
    frase[strcspn(frase, "\n")] = '\0';
    
    //encontra a primeira ocorrencia de 'C'
    char *posicao = strchr(frase, 'C');
    
    if (posicao != NULL) {
        // Descobre quantos caracteres existem antes da letra 'C'
        int letras_antes = posicao - frase;

        // 1. Copia a parte inicial da frase (antes do 'C')
        strncpy(frasenova, frase, letras_antes);
        frasenova[letras_antes] = '\0'; // Garante que a string seja finalizada corretamente

        // 2. Adiciona o termo "C++" logo em seguida
        strcat(frasenova, "C++");

        // 3. Junta o restante da frase original (o que vinha depois do 'C')
        strcat(frasenova, posicao + 1);
        
        printf("Frase modificada: %s\n", frasenova);
        
    } else {
        
        printf("A letra 'C' nao foi encontrada na frase.\n");
        printf("Frase original: %s\n", frase);
    }

    return 0;
}
