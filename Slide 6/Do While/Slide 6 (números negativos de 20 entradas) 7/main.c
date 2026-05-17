/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, counter = 1, negativos = 0; //criando as variaveis 
    
    do //faz até que...
    {
        printf("Digite o %dº numero:\n", counter); //pede o numero
        scanf("%d", &num); //escaneia ele
        counter++; //incrementa o contador
        
        if(num < 0 && num != -99) //se num menor que 0...
        {
            negativos++; //incrementa os negativos
        }
        else if (num == -99) //se num = -99...
        {
            printf("Leitura finalizada!\n"); //acaba a leitura
        }
        
    }while(counter <= 20 && num != -99); //...até que num seja -99 ou o contador seja 20
    
    printf("Você digitou %d valore(s) negativos", negativos); //exibe os valores que são negativos

    return 0;
}
