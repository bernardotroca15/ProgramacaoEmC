/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letra;
    
    printf("Digite uma letra para eu dizer se é vogal, consoante ou outro símbolo: ");
    scanf("%c",&letra);
    
    if((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z') )
    {
        if (letra == 'A'|| letra == 'a'|| letra == 'E'|| letra == 'e'||letra == 'I'|| letra =='i' ||
        letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u')
        {
            printf("%c é uma vogal!", letra);
        }
        else
        {
            printf("%c é uma consoante!", letra);
        }
    }
    else
    {
        printf("%c é outro símbolo!", letra);
    }
    

    return 0;
}
