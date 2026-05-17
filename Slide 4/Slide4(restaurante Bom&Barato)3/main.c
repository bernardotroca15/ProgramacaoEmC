/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float kilodecomida,pesagem, total; //variáveis 
    
    kilodecomida = 45.90;//define o kilodecomida
    
    printf("Digite a quantidade de comida em gramas:");//pede a pesagem da comida em gramas
    scanf("%f",&pesagem);//escaneia esse valor em gramas
    
    total = (pesagem/1000)*kilodecomida;//calcula o preço a pagar pelo prato
    
    printf("Seu prato deu %.2f reais!", total);//exibe o resultado

    return 0;
}