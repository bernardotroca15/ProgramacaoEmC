/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, soma;
    
    printf("Digite o primeiro numero: \n");//pede o numero 1
    scanf("%d", &num1);//escaneia o numero 1
    printf("Digite o segundo numero: \n"); // pede o numero 2
    scanf("%d", &num2);//escaneia o numero 2
    
    soma = num1 + num2; //soma
    
    printf("A soma dos valores é : %d \n", soma); //exibe a soma
    

    return 0;
}