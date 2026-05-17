/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dependentes;//variavel inteira de dependentes
    float salario, anos, salarionovo;//variaveis float
    
    printf("Quantos anos de serviço você tem? ");//pede os anos de serviço
    scanf("%f", &anos);//escaneia esse valor de anos
    
    printf("Quantos dependentes você possui? ");//pede os dependentes do funcionário
    scanf("%d", &dependentes);//escaneia os dependentes
    
    printf("Qual o valor do seu salario? ");//pede o salario
    scanf("%f", &salario);//escaneia o salario
    
    if (anos>4 && dependentes>3 && salario<2000)//se anos for maior que 4, dependentes maior que 3 e salario menor que 2000...
    {
        printf("Temos novidades para você! Você tem direito ao aumento salarial!");//exibe se tem aumento salarial ou não
        salarionovo = salario + (0.2*salario);//calcula o novo salario
        printf("Seu antigo salario era de %.2f reias e agora será de %.2f reais!", salario, salarionovo);//exibe o antigo salario e o novo
    }
    else//caso o funcionário não esteja nas condições de aumento salarial...
    {
        printf("Que pena, você não tem direito ao aumento salarial! :(");//exibe a mensagem dizendo que não pode ter o aumento slarial
    }

    return 0;
}
