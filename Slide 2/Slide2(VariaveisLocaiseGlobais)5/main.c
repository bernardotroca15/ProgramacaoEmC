/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int variavelGlobal; //definindo a global

int main()
{
    int variavelLocal; //definindo a local
    
    variavelGlobal = 1; //valor da global
    variavelLocal = 2; //valor da local
    
    printf("variavel global = %d \n",  variavelGlobal);
    printf("variavel local = %d \n",  variavelLocal);

    return 0;
}
