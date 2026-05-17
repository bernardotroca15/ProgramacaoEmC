/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

double mesada(double notas, int idade)
{
    double total;
    
    if (idade>10)
    {
        //se a idade for maior que 10, a mesada é fixa: 20 * idade
        return idade * 20.0;
    }
    else
    {
        //caso contrario, a mesada depende das notas
        total = notas * 20;
        return total;
    }
}

int main()
{
    int idade;
    double notas;
    
    printf("Digite a idade: \n");
    scanf("%d",&idade);
    
    printf("Digite a média das suas notas: \n");
    scanf("%lf",&notas);
    
    double valorMesada = mesada(notas, idade);
    printf("Valor da mesada : %.2f\n", valorMesada);

    return 0;
}
