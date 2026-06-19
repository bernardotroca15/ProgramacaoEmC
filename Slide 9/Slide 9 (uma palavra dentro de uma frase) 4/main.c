
#include <stdio.h>
//biblioteca de string
#include <string.h>

//funcao para ler string 
void lerString(char frase[], int tamanho)
{
    fgets(frase, tamanho, stdin);
    int len = strlen(frase);
    if (frase[len - 1] == '\n')
    {
        frase[len - 1] = '\0';
    }
}

int main()
{
    //variaveis das entradas
    char frase1[50];
    char palavra[50];
    
    //pede a frase
    printf("Digite a frase:\n");
    lerString(frase1, 50);
    
    //pede a palavra
    printf("Digite a palavra:\n");
    lerString(palavra, 50);
    
    //verfica se a palavra existe dentro da frase
    if(strstr(frase1,palavra) != NULL)
    {
      printf("%s encontrada dentro de %s \n", palavra, frase1);
    }
    else
    {
        printf("Palavra não encontrada dentro da frase!");
    }
    
    return 0;
}