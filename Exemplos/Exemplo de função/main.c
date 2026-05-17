/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float F1(float x, int y) //define a funcao
{
    float r;
    r = x*y + 2;
    return(r);
}

int main()
{
    float a;
    a = F1(5.0, 3); //usa a funcao
    printf("O valor de a = %.2f\n", a);

    return 0;
}
