/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numporsete = 2; //numero divisivel por sete vai ser o menor valor, que é 2
    int soma = 0; //a soma no inicio sera 0
    
    while(numporsete < 300 && numporsete >= 2) //enquanto o numero não chegar a 300, entra no loop...
    {
        if(numporsete % 7 == 0) //se num divisivel por sete...
        {
            soma = soma + numporsete; //a soma será soma + o numporsete
            
            numporsete++; //incrementa o valor
        }
        else //senão...
        {
            numporsete++; //incrementa o valor mesmo assim para chegar em 300
        }
    }
    
    printf("A soma é %d \n", soma); //exibe a soma
    
    return 0;
}
