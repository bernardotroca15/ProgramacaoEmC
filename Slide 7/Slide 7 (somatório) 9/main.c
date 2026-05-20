
#include <stdio.h>

//prévia da função
int Somatorio(int num);

int main()
{
    int num;
    
    printf("Digite o numero:\n");//pede o numero
    scanf("%d", &num);
    
    printf("O Somatorio é: %d", Somatorio (num)); //exibe o somatório

    return 0;
}

//função de somatório
 int Somatorio(int num)
{
    if (num < 1)
    {
        printf("Precisa ser um valor inteiro e positivo!");
    }
    return (num*(num+ 1)) / 2;
}
