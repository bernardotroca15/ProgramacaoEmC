
#include <stdio.h>

//prévia da função
void ordemCrescente(int num, int num2, int num3);

int main()
{
    int num, num2, num3;
    
    printf("Digite o primeiro numero:\n"); //pede o numero 1
    scanf("%d",&num);
    
    printf("Digite o segundo numero:\n"); //pede o numero 2
    scanf("%d",&num2);
    
    printf("Digite o terceiro numero:\n"); //pede o numero 3
    scanf("%d",&num3);
    
    printf("Em ordem crescente é:"); //exibe em ordem crescente
    
    ordemCrescente(num, num2, num3);//saída da função


    return 0;
}
//função para ordem crescente
void ordemCrescente(int num, int num2, int num3)
{
    if (num <= num2 && num2 <= num3) {
        printf("%d %d %d\n", num , num2, num3);
    } 
    else if (num <= num3 && num3 <= num2) {
        printf("%d %d %d\n", num, num3, num2);
    } 
    else if (num2 <= num && num <= num3) {
        printf("%d %d %d\n", num2, num, num3);
    } 
    else if (num2 <= num3 && num3 <= num) {
        printf("%d %d %d\n", num2, num3, num);
    } 
    else if (num3 <= num && num <= num2) {
        printf("%d %d %d\n", num3, num, num2);
    } 
    else { // c <= b && b <= a
        printf("%d %d %d\n", num3, num2, num);
    }
}