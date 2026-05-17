/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeroOriginal, numero, reverso = 0, digito;

    printf("Digite um numero inteiro de cinco digitos: ");
    scanf("%d", &numeroOriginal);

    // Guardamos o valor original para comparar no final
    numero = numeroOriginal;

    // Invertendo o número usando a lógica de divisão e módulo
    while (numero != 0) {
        digito = numero % 10;          // Isola o último dígito
        reverso = reverso * 10 + digito; // Constrói o número invertido
        numero = numero / 10;          // Remove o último dígito do número original
    }

    // Verifica se o original é igual ao seu reverso
    if (numeroOriginal == reverso) {
        printf("O numero %d é um palindromo.\n", numeroOriginal);
    } else {
        printf("O numero %d nao é um palindromo.\n", numeroOriginal);
    }

    return 0;
}