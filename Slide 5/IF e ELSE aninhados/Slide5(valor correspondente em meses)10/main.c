/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes; //variavel de mes
    
    printf("Digite um valor entre 1 e 12 para saber o mês!");//pede o mês
    scanf("%d", &mes);
    
    if (mes == 1) //se 1, Janeiro..
    {
        printf("%d é Janeiro", mes);
    }
    else //senão
    {
        if(mes == 2) //se 2, Fevereiro
        printf("%d é Fevereiro", mes);
        
        if(mes == 3) //se 3, Março
        printf("%d é Março", mes);
        
        if(mes == 4) //se 4, Abril
        printf("%d é Abril", mes);
        
        if(mes == 5) //se 5, Maio
        printf("%d é Maio", mes);
        
        if(mes == 6) //se 6, Junho
        printf("%d é Junho", mes);
        
        if(mes == 7) //se 7, Julho
        printf("%d é Julho", mes);
        
        if(mes == 8) //se 8, Agosto
        printf("%d é Agosto", mes);
        
        if(mes == 9) //se 9, Setembro
        printf("%d é Setembro", mes);
        
        if(mes == 10) //se 10, Outubro
        printf("%d é Outubro", mes);
        
        if(mes == 11) //se 11, Novembro
        printf("%d é Novembro", mes);
        
        if(mes == 12) //se 12, Dezembro
        printf("%d é Dezembro", mes);
        
        if(mes != 1 && mes != 2 && mes != 3 && mes != 4 && mes != 5 && mes != 6 
        && mes != 7 && mes != 8 && mes != 9 && mes != 10 && mes != 11 && mes != 12) //senão..
        {
            printf("Esse número não é válido como mês do ano!"); //numero inválido
        }
    }

    return 0;
}
