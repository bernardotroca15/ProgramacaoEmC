/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int distancia, tempo;
    
    printf("Digite a distância em km:");//pede a distância
    scanf("%d",&distancia );//escaneia a distância
    
    printf("Digite o tempo da viagem em horas completas:");//pede o tempo
    scanf("%d", &tempo);//escaneia o tempo
    
    if((distancia/tempo)> 80)//condição que verifica se a velocidade foi maior que 80km
    {
        printf("Você correu demais! Ultrapassou 80km/h!");//printa caso tenha ultrapassado 80km
    }
    else
    {
        printf("Parabéns!Você respeitou o limite de velocidade!");//printa caso tenha valor menor que 80km
    }

    return 0;
}