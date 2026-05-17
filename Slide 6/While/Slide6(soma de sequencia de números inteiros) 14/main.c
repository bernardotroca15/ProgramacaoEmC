/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num, soma = 0, counter = 0; //cria as variáveis inteiras
    printf("Digite o 1º número:\n"); //pede o primeiro número (o que identifica a quantidade de entradas restantes)
    scanf("%d", &num1); //escaneia ele
    counter++; //incremento do counter
    
    while(counter <= num1) //enquanto o counter for menor ou igual ao primeiro número...
    {
        printf("Digite o %dº número:\n", counter + 1);//pede o n número
        scanf("%d",&num); //escaneia ele
        
        soma = soma + num; // a soma vai ser ela mesma mais o novo valor!
        
        counter++;
    }

    printf("A soma é : %d", soma);//exibe a soma!

    return 0;
}
