/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float precoGasolina, pagamentoGasolina, litros;//variáveis de casa decimal
    
    printf("Digite o valor pago:");//pede o valor pago na gasolina
    scanf("%f", &pagamentoGasolina);//escaneia o valor pago na gasolina
    
    printf("Digite o preço do litro da gasolina:");//pede o preço da gasolina 
    scanf("%f",&precoGasolina);//escaneia o preço da gasolina
    
    litros =  pagamentoGasolina/precoGasolina;//calcula os litros que ele coloca no tanque
    
    printf("Você colocou: %.2f litro(s).", litros);// exibe os litros 
    

    return 0;
}