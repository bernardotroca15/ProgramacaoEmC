/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a:\n");//pede o coeficiente a
    scanf("%lf", &a);
    
    printf("Digite o coeficiente b:\n");//pede o coeficiente b
    scanf("%lf", &b);
    
    printf("Digite o coeficiente c:\n");//pede o coeficiente c
    scanf("%lf", &c);
    

    // Uma equação de 2º grau exige que 'a' seja diferente de zero
    if (a == 0) {
        printf("O valor de A não pode ser zero em uma equação de segundo grau.\n");
    } else {
        // Cálculo do Discriminante (Delta)
        delta = pow(b, 2) - (4 * a * c);

        printf("Delta = %.2f\n", delta);//exibe o delta

        if (delta < 0) { //se delta menor que 0...
            printf("Classificação: Raízes não-reais\n"); //raizes nao reais
            printf("Não é possível calcular raízes reais para este caso.\n");
        } 
        else if (delta == 0) { // se delta = 0
            x1 = -b / (2 * a);
            printf("Classificação: Raiz única\n"); //raiz unica
            printf("X = %.2f\n", x1);
        } 
        else { //se delta maior que 0...
            x1 = (-b + sqrt(delta)) / (2 * a); //x1 = -b + raizdedelta / 2*a
            x2 = (-b - sqrt(delta)) / (2 * a); //x1 = -b - raizdedelta / 2*a
            printf("Classificação: Raízes distintas\n"); //exibe as raizes
            printf("X1 = %.2f\n", x1); 
            printf("X2 = %.2f\n", x2);
        }
    }

    return 0;
}