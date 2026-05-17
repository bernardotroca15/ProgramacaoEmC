/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num; //numero inteiro
    int counter = 1; //contador = 1
    int sum = 0; //soma inteira
    
    while(counter<=30) //enquanto contador menor igual a 30...
    {
        printf("Digite um numero: \n"); //pede o numero
        scanf("%d",&num);
        
        if (num % 2 != 0 ) //se num for impar...
        {
            sum = sum + num; //soma recebe o numero
        }
        
        counter++; //incremento do counter
    }
    if (counter >= 30) // se contador maior igual a 30 (repetiçao terminada)...
    {
        printf("A soma é %d \n", sum); //exibe a soma
    }
    

    return 0;
}
