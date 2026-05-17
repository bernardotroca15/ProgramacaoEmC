/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int segundos, hora, minuto, segundo;//variáveis
    
    printf("Quantos segundos se passaram desde meia noite?");
    scanf("%d",&segundos);//escaneia os segundos
    
    hora = segundos/3600;//calcula a hora
    minuto = (segundos%3600)/60;//calcula os minutos
    segundo = segundos%60;//calcula os segundos
    
    printf("O tempo em horas é %dh:%dm:%ds",hora, minuto, segundo);//exibe cada valor como pedido

    return 0;
}
