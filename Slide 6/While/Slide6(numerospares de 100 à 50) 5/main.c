/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num = 100; //num inteiro = 100
    
    while(num<=100 && num >=50) // enquanto numero nao chega a 50...
    {
        if (num % 2 == 0) //se numero for par
        {
            printf("%d é par \n", num); //numero é par
        }
        
        num--; //num decrementa
    }
    if(num < 50) //se repetiçao finalizar...
    {
        printf("FIM!!"); //FIM
    }

    return 0;
}
