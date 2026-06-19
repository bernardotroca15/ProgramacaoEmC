
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
    char frase2[50];
    
    //pede a frase 1
    printf("Digite a primeira frase:\n");
    lerString(frase1, 50);
    
    //pede a frase 2
    printf("Digite a segunda frase:\n");
    lerString(frase2, 50);
    
    
    //verifica se sao iguais
    if(strcmp(frase1, frase2) == 0)
    {
        printf("As strings são iguais!\n");
    }
    //verifica se a primeira vem antes em ordem alfabetica
    else if (strcmp(frase1, frase2) < 0)
    {
        printf("A primeira frase vem antes que a segunda!\n");
    }
    //verifica se a segunda vem antes em ordem alfabetica
    else
    {
        printf("A segunda frase vem antes que a primeira!\n");
    }
    
    //Unindo as frases
    strcat(frase1, frase2);
    
    printf("As frases unidas: %s ", frase1);
    

    return 0;
}