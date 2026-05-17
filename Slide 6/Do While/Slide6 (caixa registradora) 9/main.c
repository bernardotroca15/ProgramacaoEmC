/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int opcao; //variavel de opcao
	float valordacompra; //valor da compra
	float comprasavista = 0, comprasaprazo = 0; //variaveis de compras 
	
	do //faz até que...
	{
		printf("LOJAS LTPI\n");
		printf("(1) VENDAS À VISTA\n");
		printf("(2) VENDAS À PRAZO\n");
		printf("(3) RELATÓRIO DE COMPRAS\n");
		printf("(4) FIM\n");
		printf("Opção:\n");
		scanf("%d",&opcao);
		
		switch(opcao)
		{
		    case 1:
                printf("Digite o valor da compra à vista: R$ ");
                scanf("%f", &valordacompra);
                comprasavista++;
                printf("Venda registrada com sucesso!\n");
                break;
                
            case 2:
                printf("Digite o valor da compra à prazo: R$ ");
                scanf("%f", &valordacompra);
                comprasaprazo++;
                printf("Venda registrada com sucesso!\n");
                break;
                
            case 3:
                printf("\n--- RELATÓRIO ATUAL ---\n");
                printf("Vendas à vista: %.0f\n", comprasavista);
                printf("Vendas à prazo: %.0f\n", comprasaprazo);
                break;
                
            case 4:
                printf("\nEncerrando o sistema...\n");
                int comprasgeral = comprasavista + comprasaprazo;
                
                if (comprasgeral > 0) {
                    float percentualvista = (comprasavista / comprasgeral) * 100;
                    float percentualprazo = (comprasaprazo /comprasgeral) * 100;
                    
                    printf("--- RELAÇÃO PERCENTUAL FINAL ---\n");
                    printf("Total de vendas: %d\n", comprasgeral);
                    printf("À vista: %.2f%%\n", percentualvista);
                    printf("À prazo: %.2f%%\n", percentualprazo);
                } else {
                    printf("Nenhuma venda foi realizada hoje.\n");
                }
                break;
                
            default:
                printf("\n[ERRO] Opção inválida! Tente novamente.\n");
                break;
        }
		
	} while(opcao != 4); 

	return 0;
}
