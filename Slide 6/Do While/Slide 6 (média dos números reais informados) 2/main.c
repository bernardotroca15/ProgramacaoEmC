/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int counter = 0; //criando o counter
    float soma, num, media; //criando as variáveis float
    
    do //faz até que...
    {
        printf("Digte o número:\n"); //pede um numero
        scanf("%f", &num); //escaneia ele
        
        if(num != -99) //se for diferente de -99
        {
            soma = soma + num; //faz a soma das entradas
            counter++; //adciona valor ao counter
        }
        
        media  = soma / counter; //faz a média das entradas
    }
    while(num != -99); //...até que num seja -99
    
    
    printf("A média aritmética é %.2f !", media); //exibe a média


    return 0;
}
