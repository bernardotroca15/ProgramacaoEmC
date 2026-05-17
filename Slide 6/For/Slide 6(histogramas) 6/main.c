/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, counter=1;//variaveis inteiras
    int contador2; //contador dos asteriscos
    
    for(counter; counter <= 5; counter++)//enquanto counter for <= 5...
    {
        printf("Digite o %dº número:\n", counter); //pede um numero
        scanf("%d",&num);
        
        printf("%d = ", num); //imprime o numero
        
        if(num < 0 || num > 30) //se o numero for menor que 0 ou maior que 30...valor inválido!
        {
            printf("Valor inválido!");
        }
        
        contador2 = 1; //contador dos asteriscos se torna 1
        
        while(contador2 <= num && num <= 30) //enquanto contador dos asteriscos não chega no numero...
        {
            printf("*"); //imprime os asteriscos correspondentes
            contador2++;
        }
        printf("\n"); //quebra de espaço para deixar bonito
    }

    return 0;
}
