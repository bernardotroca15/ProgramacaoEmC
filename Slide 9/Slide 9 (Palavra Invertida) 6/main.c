
#include <stdio.h>
//biblioteca de string
#include <string.h>

int main()
{
    //variavel da palavra
    char palavra[50];
    int counter = 0;
    
    //pede a palavra:
    printf("Digite uma palavra para ser invertida:\n");
    fgets(palavra, sizeof(palavra), stdin);
    
    //define o tamanho da palavra
    int tamanho = strlen(palavra);
    
    //tira o \n
    if(tamanho > 0 && palavra[tamanho - 1] == '\n')
    {
        palavra[tamanho - 1] = '\0';
    }
    
    //printa a palavra ao contrário
    for(counter = tamanho - 1; counter >= 0; counter--)
    {
        printf("%c", palavra[counter]);
    }
    
    printf("\n");

    return 0;
}
