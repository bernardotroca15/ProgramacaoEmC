/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void dobrar(int num)
{
    num = num * 2; //modifica apenas a copia local
    printf("Dentro da Função: num = %d\n", num);
}

int main()
{
    int numero = 7;
    dobrar(numero); //passa por valor
    printf("Fora da função : numero = %d\n", numero); //original não muda

    return 0;
}
