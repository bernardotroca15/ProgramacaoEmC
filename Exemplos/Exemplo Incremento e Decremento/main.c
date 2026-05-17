/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>
int main()
{

int x = 100, y = 10;
printf("Valor inicial de x: %d \n",x);
printf("\n-------------------- Pos-incremento --------------------- \n\n");
printf("Valor de x na mesma linha do pos-incremento: %d \n",x++);
printf("Valor de x na linha seguinte ao pos-incremento: %d \n",x);
printf("\n-------------------- Pre-incremento --------------------- \n\n");
printf("Valor de x na mesma linha do pre-incremento: %d \n",++x);
printf("Valor inicial de y: %d \n",y);//nesta linha vai exibir 10
printf("\n-------------------- Pos-decremento --------------------- \n\n");
printf("Valor de y na mesma linha do pos-decremento: %d \n",y--);
printf("Valor de y na linha seguinte ao pos-decremento: %d \n",y);
printf("\n-------------------- Pre-decremento --------------------- \n\n");
printf("Valor de y na mesma linha do pre-decremento: %d \n",--y);
return 0;

}