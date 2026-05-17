/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, counter = 1, counter2 = 3, counter3 =1, countertemp; //variaveis inteiras
    
    printf("Digite o lado do quadrado:"); //pede o lado do quadrado
    scanf("%d", &num);
    
    if(num > 20 || num < 0) //valor inválido se for maior que 20 ou menor que 0
    {
        printf("VALOR INVÁLIDO!!");
    }
    
    for(counter; counter <= num && num <= 20; counter++) //printa a primeira linha do quadrado
    {
        printf("*");
    }
    printf("\n");
    
    for(counter2; counter2 <= num && num <=20; counter2++) //printa os lados do quadrado
    {
        printf("*");
        countertemp = 1;
        while(countertemp <= num/2)
        {
            printf(" ");
            countertemp++;
        }
        printf("*\n");
    }

    
    for(counter3; counter3 <= num && num <= 20; counter3++) //printa a ultima linha do quadrado
    {
        printf("*");
    }
    printf("\n");
    

    return 0;
}
