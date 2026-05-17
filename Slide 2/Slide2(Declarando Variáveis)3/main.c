/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    //criando as variáveis
    int numOne;float numFloat;double numDouble;char gender;
    
    //declarando as variáveis
    numOne = 2;
    numFloat = 2.0;
    numDouble = 2.75;
    gender = 'M';
    
    //exibindo as variáveis
    printf("número = %d \n", numOne);
    printf("númerofloat = %.1f \n" , numFloat);
    printf("númerodouble = %.2f \n", numDouble);
    printf("gênero = %c \n", gender);

    return 0;
}
