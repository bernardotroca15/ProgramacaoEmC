/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, quadrado;//variaveis inteiras
    num = 1;//num recebe 1 (o primeiro numero)
    
    while(num<=5)//enquanto num for menor que 5...
    {
        quadrado = num*num; //calcula o quadrado de num
        printf("O quadrado de %d é: %d \n",num, quadrado); //exibe o quadrado de num
        num = num + 1; //incremento de num
    }

    return 0;
}
