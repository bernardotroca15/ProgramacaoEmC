
#include <stdio.h>
//prévia da função
int dataparaDias(int dia, int mes, int ano, int dias);

//função princiapl
int main()
{
    int dia, mes, ano, dias;
    
    printf("Digite a data (dia mes ano):");
    scanf("%d %d %d", &dia , &mes , &ano);
    
    printf("O valor em dias é: %d", dataparaDias(dia, mes, ano, dias));

    return 0;
}
//função para transformar data em dias
int dataparaDias(int dia, int mes, int ano, int dias)
{
    dias = dia + (mes*30) + (ano*365);
    return dias;
}

