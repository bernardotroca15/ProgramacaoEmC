/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media; //as variaveis das notas
    
    printf("Digite a primeira nota: "); //pede a nota 1
    scanf("%f",&nota1); //escaneia a nota 1
    
    printf("Digite a segunda nota: "); //pede a nota 2
    scanf("%f",&nota2); //escaneia a nota 2
    
    printf("Digite a terceira nota: "); //pede a nota 3
    scanf("%f",&nota3); //escaneia a nota 3
    
    media = (nota1 + nota2 + nota3)/3; //calcula a média
    
    printf("Sua média é %.2f \n", media); //exibe a média
    
    if (media>=6) //se média maior ou igual a 6, aprovado!
    {
        printf("Parabéns, você foi aprovado!");
    }
    else //senão...
    {
        if(media>= 5 && media <=6) //se média maior ou igual a 5 e menor ou igual a 6, prova final!
        {
            printf("Você está de Prova Final!");
        }
        if(media<5) //se média menor que 5, reprovado!
        {
            printf("Que pena, você está reprovado!");
        }
    }

    return 0;
}
