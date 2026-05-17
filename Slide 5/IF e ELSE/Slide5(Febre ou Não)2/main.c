/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperatura;
    
    printf("Qual sua temperatura?");//pede a temperatura 
    scanf("%f",&temperatura);//escaneia a temperatura
    
    if(temperatura>37.5)//condicional para averiguar se esta com febre
    {
        printf("Você está com febre!");//se maior que 37.5, está com febre
    }
    else
    {
        printf("Voce não está com febre!");//se menor que 37.5, sem febre
    }

    return 0;
}