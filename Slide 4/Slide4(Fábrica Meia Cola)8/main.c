/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lata, garrafinha, garrafa, litros;//variáveis

    printf("Quantas latas de 355ml foram compradas?");//pede a quantidade de latas
    scanf("%d", &lata);
    
    printf("Quantas garrafas de 290ml foram compradas?");//pede a quantidade de garrafinhas 
    scanf("%d", &garrafinha);
    
    printf("Quantas garrafas de 2L foram compradas?");//pede a quantidade de garrafas de 2l
    scanf("%d", &garrafa);
    
    litros = ((lata*350) + (garrafinha*290) + (garrafa*2000))/1000;//calcula a quantidade de litros
    
    printf("Foram comprados %d litros", litros);// exibe a quantidade de litros
    return 0;
}
