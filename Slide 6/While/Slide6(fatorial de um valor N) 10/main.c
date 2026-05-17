/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int num; //numero inteiro
    int fatorial; //fatorial inteiro

    printf("Digite um numero inteiro não negativo:\n"); //pede num
    scanf("%d",&num);

    if (num == 0) //se  num = 0, fatorial = 1
    { 
        printf("Fatorial de 0 = 1\n");
        return 0;
    }
    
    printf("%d! = ", num); //printa o numero em fatorial
        
    while (num > 0 && num != 0) { //enquanto num maior que 0 e diferente que 0
        
        if(num==0) //quando chegar a 0
        {
            printf(""); //nao aparece
        }
        else //senão
        {
            fatorial = num--; //fatorial = num decrementado
            printf(" %d ",fatorial); //exibe o fatorial
            printf("*");
        }
    }

    

    return 0;
}
