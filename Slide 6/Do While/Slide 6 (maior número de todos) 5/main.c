/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int counter = 1; //contador
    int num, maior; //numero e maior
    
    printf("Digite o %dº numero (obrigatório):\n", counter);//pede o primeiro numero que de padrão é o maior
    scanf("%d", &maior);//escaneia ele
    counter++;//aumenta o contador
    
    do //faz até que...
    {
        printf("Digite o %dº número:\n", counter); //pede o segundo numero
        scanf("%d", &num); //escaneia ele
        counter++; // aumenta o contador
        
        if (num > maior)// se num > maior, então num passa a ser o maior
        {
            maior = num;
        }
    }
    while(num != -999); //até que num seja -999

    printf("O maior valor é: %d", maior);//exibe o maior valor 

    return 0;
}
