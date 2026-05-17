/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float pi, raio, altura, volume;//variáveis
    
    pi = 3.14159265;//valor do PI
    
    printf("Qual o raio da lata, em cm?");//pede o raio
    scanf("%f",&raio);
    
    printf("Qual a altura da lata, em cm?");//pede a altura
    scanf("%f",&altura);
    
    volume = (pi*(raio*raio))*altura;//calcula o volume da lata
    
    printf("O volume da lata de óleo é de %.2f cm³", volume);//exibe o volume da lata
    return 0;
}
