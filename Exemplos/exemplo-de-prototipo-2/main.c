/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//prototipo das funcoes
double calcularAreadoRetangulo(double base, double altura);
double calcularPerimetroRetangulo(double base, double altura);
double calcularAreadoCirculo(double raio);
double calcularPerimetroCirculo(double raio);

int main()
{
    double base, altura, raio;
    
    //retangulo
    printf("Digite a base do retangulo:");
    scanf("%lf", &base);
    printf("Digite a altura do retangulo:");
    scanf("%lf",&altura);
    
    printf("\nÁrea do retangulo : %.2f\n", calcularAreadoRetangulo(base, altura));
    printf("Perímetro do retangulo: %.2f\n\n", calcularPerimetroRetangulo(base, altura));
    
    //circulo
    printf("Digite o raio do circulo:");
    scanf("%lf", &raio);
    
    printf("\nA área do circulo é: %.2f\n", calcularAreadoCirculo(raio));
    printf("Perímetro do circulo: %.2f \n", calcularPerimetroCirculo(raio));
    
    return 0;
}
//Função retangulo
double calcularAreadoRetangulo(double base, double altura)
{
    return base*altura;
}
double calcularPerimetroRetangulo(double base, double altura)
{
    return (base*2)+(altura*2);
}
//Funcao do circulo
double calcularAreadoCirculo(double raio)
{
    const double PI = 3.14159265;
    return raio * raio * PI;
}
double calcularPerimetroCirculo(double raio)
{
    const double PI = 3.14159265;
    return 2 * PI * raio;
}