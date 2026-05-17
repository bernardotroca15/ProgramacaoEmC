/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero, copia, digito;
    int contadorPares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Tratamento para números negativos
    copia = (numero < 0) ? -numero : numero;

    // Caso especial: se o número for 0, ele tem 1 dígito par
    if (copia == 0) {
        contadorPares = 1;
    } else {
        // O laço for executa enquanto a copia for maior que 0
        // A cada iteração, dividimos o número por 10 (copia /= 10)
        for (; copia > 0; copia /= 10) {
            digito = copia % 10; // Pega o último dígito
            
            if (digito % 2 == 0) {
                contadorPares++;
            }
        }
    }

    printf("O resultado e: %d\n", contadorPares);

    return 0;
}