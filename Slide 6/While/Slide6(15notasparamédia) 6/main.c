/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int counter; // valor inteiro do contador 
    float nota,soma,media; //valores float para calcular a media 
    
    counter = 1; //counter = 1
    
    while(counter<=15) //enquanto counter n chega a 15...
    {
        printf("Qual a nota?\n"); //pede a nota
        scanf("%f",&nota);
        
        soma = soma + nota; // faz a soma das notas
        
        counter++; //incrementa o contador 
    }
    
    media = soma/15;// calcula a media
    
    printf("A média é: %.2f", media); //exibe a media

    return 0;
}
