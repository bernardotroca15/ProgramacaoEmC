/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3; //numeros inteiros
    
    printf("Digite o primeiro numero: "); //pede num 1
    scanf("%d",&num1); //escaneia ele
    
    printf("Digite o segundo numero: "); //pede num 2
    scanf("%d",&num2); //escaneia ele
    
    printf("Digite o terceiro numero: "); //pede num 3
    scanf("%d",&num3); //escaneia ele
    
    if(num1>num2 && num1>num3) //se num1 for maior...
    {
        printf("%d (primeiro) é o maior número", num1); //exibe num1 como maior
    }
    else //senão...
    {
        if(num2>num3 && num2>num1) //se num2 for maior...
        {
            printf("%d (segundo) é o maior número", num2); //exibe num2 como maior
        }
        
        if(num3>num2 && num3>num1) //se num3 for maior...
        {
            printf("%d (terceiro) é o maior número", num3); //exibe num3 como maior
        }
        
    }
    
    
    return 0;
}
