/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num, counter = 1, divisivel_cinco = 0; //criando as variaveis 
    
    do //faz até que...
    {
        printf("Digite o %dº numero (ou 0 para encerrar):\n", counter); //pede o numero
        scanf("%d", &num); //escaneia ele
        counter++; //incrementa o contador
        
        if(num % 5 == 0 && num != 0) //se num for divisivel por 5...
        {
            divisivel_cinco++; //incrementa os divisíveis por 5
        }
        if (num == 0) //se num = 0...
        {
            printf("Leitura finalizada!\n"); //acaba a leitura
            break;
        }
        
    }while(counter <= 15 && num != 0); //...até que num seja 0 ou o contador seja 15
    
    printf("%d valores são divisíveis por 5!\n", divisivel_cinco); //exibe os valores que são divisíveis por 5

    return 0;
}
