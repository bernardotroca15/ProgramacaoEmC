
#include <stdio.h>
//biblioteca de string
#include <string.h>

int main() 
{
    //varaivel da frase
    char frase[100];
    //controlador
    int i = 0;
    char c;
    printf("Digite uma frase:\n");
    
    while ((c = getchar()) != '\n' && i < 99) {
        // lê até Enter ou limite
        frase[i++] = c;
    }
    frase[i] = '\0';
    
    //exibe a frase
    printf("Você digitou: %s\n", frase);
    
    //exibe a quantidade de caracteres
    printf("O texto possui %lu caracteres!\n", strlen(frase));
    
return 0;
}