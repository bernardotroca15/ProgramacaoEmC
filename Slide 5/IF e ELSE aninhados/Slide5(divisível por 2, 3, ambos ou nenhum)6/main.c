/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero; //cria o número a ser colocado pelo usuário
    
    printf("Digite o número: "); //pede o número ao usuário
    scanf("%d",&numero); //escaneia o numero
    
    if(numero % 2 == 0 && numero % 3 == 0) //verifica se é divisivel por 2 e por 3
    {
        printf("%d é divisível por 2 e por 3!", numero); //exibe quando é divisivel pelos 2
    }
    else //senão
    {
        if(numero % 2 == 0) //se for só divisivel por 2
        {
            printf("%d é divisivel por 2!", numero); //exibe se é divisivel por 2
        }
        if(numero %3 == 0) //se for só divisivel por 3
        {
            printf("%d é divisivel por 3!", numero); //exibe se é divisivel por 3
        }
        if(numero %2 != 0 && numero %3 != 0) //se não for nem por 2 nem por 3
        {
            printf("%d não é divisivel nem por 2 nem por 3", numero); //exibe se não é divisivel nem por 3 nem por 2
        }
    }

    return 0;
}