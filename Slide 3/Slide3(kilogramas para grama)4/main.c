/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float kilograma, grama; //criando as variaveis
    
    printf("Digite o valor em kilos: "); //pede o valor em kg
    scanf("%f", &kilograma); //escaneia o valor
    
    grama = kilograma * 1000; //convertendo valores
    
    printf("Seu valor em gramas é: %.2fg", grama); //exibe o valor em gramas

    return 0;
}