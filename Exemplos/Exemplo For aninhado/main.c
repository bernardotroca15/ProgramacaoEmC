/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    printf("Digite valores para x e y:");
    scanf("%d %d", &x, &y);
    
    printf("\nTabuada de multiplicação!\n\n");
    
    printf(" |");
    
    for(int j = x; j <= y; j++)
        printf("%3d", j);
        
    printf("\n----");
    
    for(int j = x; j<=y; j++)
        printf("----");
        
    printf("\n");
    
    for(int i = x; i <= y; i++)
    {
        printf("%2d |", i);
        for(int j = x; j <= y; j++)
            printf("%3d", i*j);
            
        printf("\n");
    }

    return 0;
}
