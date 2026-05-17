/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int anos, dias; //variáveis
    
    printf("Coloque sua idade em anos:");//pede a idade em anos
    scanf("%d",&anos); //escaneia o valor
    
    dias = anos * 365; //calcula a idade em dias 
    
    printf("Sua idade em dias é %d", dias); //exibe a idade em dias

    return 0;
}
