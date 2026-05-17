/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int voto, jose = 0, maria = 0, counter = 1; //criando as variaveis 
    
    do //faz até que...
    {
        printf("Digte o %dº voto (1 para José 2 para Maria):\n", counter); //pede o voto
        scanf("%d", &voto); //escaneia ele
        
        if(voto == 1) //se voto for para José
        {
            jose++; //adciona voto ao José
            counter ++; //adciona counter
        }
        else if (voto == 2) //se voto for para Maria
        {
            maria++; //adciona voto à Maria
            counter++; //adciona counter
        }
        else if (voto == 999) //se voto for igual a 999
        {
            printf("Votação Finalizada!\n"); //acaba a votação
        }
        else //se não for nenhuma das opções
        {
            printf("Voto inválido! Não foi considerado!\n"); //voto inválido
        }
        
    }
    while(voto != 999); //até que o voto seja 999
    
    printf("Maria conseguiu %d votos!\n", maria); //exibe os votos de Maria
    printf("José conseguiu %d votos!\n", jose); //exibe os votos de José
    
    if (jose > maria) //se votos de José forem maior que os de Maria...
    {
        printf("José Ganhou!"); //José ganha
    }
    else if (jose == maria) //se voto de José igual ao de Maria...
    {
        printf("Houve um empate!"); //empate
    }
    else //se voto de Maria for maior...
    {
        printf("Maria Ganhou!"); //Maria ganha
    }

    return 0;
}