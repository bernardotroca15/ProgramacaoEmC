/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float lado, area; //criando as variáveis 
    
    printf("Coloque o valor do lado do quadrado: \n"); //pede o  valor do lado
    scanf("%f", &lado); //escaneia o valor do lado
    
    area = lado * lado; //calcula a área do quadrado
    
    printf("A área do quadrado é: %.2f", area); //exibe a área calculada

    return 0;
}