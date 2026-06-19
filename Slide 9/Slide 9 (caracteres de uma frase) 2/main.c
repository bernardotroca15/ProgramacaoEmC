
#include <stdio.h>
//biblioteca de string
#include <string.h>

int main()
{
    //variavel
    char frase[50];
    
    //pede a frase 
    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);
    
    //remove o \n
    int tamanho = strlen(frase);
    if (frase[tamanho - 1] == '\n')
    {
        frase[tamanho - 1] = '\0';
    }
    
    //exibe a frase e o tamanho
    printf("Sua frase é : %s \n", frase);
    printf("O tamanho da frase é: %lu \n", strlen(frase));

    return 0;
}
