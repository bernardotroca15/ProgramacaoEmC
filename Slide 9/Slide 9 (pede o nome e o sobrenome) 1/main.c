
#include <stdio.h>
//biblioteca de string
#include <string.h>

int main()
{
    //variaveis
    char nome[50];
    char sobrenome[100];
    char destino[150];
    
    printf("Digite seu nome:\n");
    //le o nome com espacos
    fgets(nome, sizeof(nome), stdin);
    //Remove o /n
    int tamanho = strlen(nome);
    if (nome[tamanho - 1] == '\n')
    {
        //cria o espaco entre as strings
        nome[tamanho - 1] = ' ';
    }
    
    printf("Digite seu sobrenome:\n");
    //le o sobrenome com espacos
    fgets(sobrenome, sizeof(sobrenome), stdin);
    //Remove o /n
    tamanho = strlen(sobrenome);
    if (sobrenome[tamanho - 1] == '\n')
    {
        sobrenome[tamanho - 1] = '\0';
    }
    
    //concatena as duas strings
    strcat(nome, sobrenome);
    
    //copia a string para destino
    strcpy(destino, nome);
    
    //exibe o resultado
    printf("O seu nome e sobrenome é: %s\n", destino);
    
    return 0;
}
