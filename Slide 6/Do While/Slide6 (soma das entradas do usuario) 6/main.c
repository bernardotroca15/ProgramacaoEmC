/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, soma = 0, counter = 1; //cria as variaveis inteiras
    
    do //faz até que...
    {
        printf("Coloque o %dº numero:\n", counter); //pede num
        scanf("%d",&num);
        
        if(num != 0) //se num diferente de 0...
        {
            soma = soma + num; //soma recebe soma + num
            counter++; //counter aumenta
        }
        
    }while(num != 0); //...até que num seja 0
    
    printf("A soma é %d", soma); //exibe a soma

    return 0;
}
