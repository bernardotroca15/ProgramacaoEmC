/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int maior, maior2, num; //valores inteiros para descobrir os dois maiores valores
    int counter = 2; //counter =  2 porque os dois primeiros valores serão os maiores por padrão

    printf("Digite o 1º valor: "); //pede o primeiro valor
    scanf("%d", &maior);

    printf("Digite o 2º valor: "); //pede o segundo valor
    scanf("%d", &maior2);

    if (maior2 > maior) { //se maior2 maior que maior...
        int temp = maior;
        maior = maior2;
        maior2 = temp; //maior2 recebe maior
    }

    while (counter < 15) //enquanto n chegar em 15...
    {
        printf("Digite o %dº valor: ", counter + 1); //pede um numero
        scanf("%d", &num);
        
        if (num > maior) { //se numero maior que maior 
            
            maior2 = maior; //maior2 recebe maior
            maior = num; //maior recebe o numero
        } 
        else if (num > maior2) { //mas se num maior que maior2
            maior2 = num; //maior2 recebe num
        }
        
        counter++; //incremento do counter para chegar em 15
    }

    printf("\nO maior valor é %d", maior); //exibe o maior
    printf("\nO segundo maior valor é %d\n", maior2); //exibe o maior2

    return 0;
}