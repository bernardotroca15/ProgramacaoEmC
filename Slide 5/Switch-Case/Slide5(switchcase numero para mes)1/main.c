/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes; //valor inteiro
    
    printf("Digite o número do mês:");//pede o mes
    scanf("%d", &mes);
    
    switch(mes)
    {
        case 1: printf("%d é Janeiro", mes); //se 1, Janeiro
                break;
        case 2: printf("%d é Fevereiro", mes); //se 2, Fevereiro
                break;
        case 3: printf("%d é Março", mes); //se 3, Março
        
        case 4: printf("%d é Abril", mes); //se 4, Abril
                break;
        case 5: printf("%d é Maio", mes); //se 5, Maio
                break;
        case 6: printf("%d é Junho", mes); //se 6, Junho
        
        case 7: printf("%d é Julho", mes); //se 7, Julho
                break;
        case 8: printf("%d é Agosto", mes); //se 8, Agosto
                break;
        case 9: printf("%d é Setembro", mes); //se 9, Setembro
        
        case 10: printf("%d é Outubro", mes); //se 10, Outubro
                break;
        case 11: printf("%d é Novembro", mes); //se 11, Novembro
                break;
        case 12: printf("%d é Dezembro", mes); //se 12, Dezembro
                break;
        default: printf("%d não é um número válido para mês!", mes); //senão, valor inválido
    }

    return 0;
}
