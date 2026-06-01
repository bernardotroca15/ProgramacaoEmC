/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float Soma(float a, int b); //prototipo de Soma

void main()
{
    //chamada da função Soma antes de sua definição
    printf("A soma é %.2f",Soma(16.7, 15));
}

float Soma(float a, int b) //Deifinindo a função
{
    float result;
    result = a + b;
    
    return result;
}