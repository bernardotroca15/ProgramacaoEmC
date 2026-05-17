/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int lado1, lado2, hipotenusa; //variaveis inteiras de lados e hipotenusa
    int contador = 0;

    printf("Buscando triplas pitagoricas (lados e hipotenusa < 500):\n");
    printf("--------------------------------------------------\n");
    printf("%-10s %-10s %-10s\n", "Lado 1", "Lado 2", "Hipotenusa");
    printf("--------------------------------------------------\n");

    // Laço triplamente aninhado (Força Bruta)
    for (lado1 = 1; lado1 < 500; lado1++) {
        // lado2 começa de lado1 para evitar duplicatas invertidas
        for (lado2 = lado1; lado2 < 500; lado2++) {
            for (hipotenusa = 1; hipotenusa < 500; hipotenusa++) {
                
                // Testa o teorema de Pitágoras: a² + b² = c²
                if ((lado1 * lado1) + (lado2 * lado2) == (hipotenusa * hipotenusa)) {
                    printf("%-10d %-10d %-10d\n", lado1, lado2, hipotenusa);
                    contador++;
                }
                
            }
        }
    }

    printf("--------------------------------------------------\n");
    printf("Total de triplas encontradas: %d\n", contador); //imprime o total de triplas pitagóricas

    return 0;
}