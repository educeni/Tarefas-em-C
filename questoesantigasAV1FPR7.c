#include <stdio.h>
#include <string.h>
#define TAM 5
/* Questão 07:
Considere que uma loja armazene dados de seus produtos em um vetor de structs, de forma que cada posição
contenha apenas o código do produto e a sua quantidade em estoque. Suponha que este vetor esteja ordenado
decrescentemente em função do campo quantidadeEstoque.
Implementar uma função que, dado o código e a quantidade desejada de um produto, proceda com as seguintes
ações:
1. Verifique se a quantidade desejada do produto existe no estoque. Caso negativo, a função retornará 0;
2. Caso haja disponibilidade do produto, a sua quantidade deve ser atualizada e o produto deslocado no vetor, de
forma a manter a ordenação. E, ao final, retornar 1. */
/* parametro = codigo, qtd //// retorno = caso não exista a qtd do produto return 0; caso haja deve return 1 + qtd-- */
typedef struct{
	
	int quantidade;
	int codigo;
}TEstoque;

int funcao(int qtd, int cod, TEstoque estoque[TAM], int tamanho)
{
	int i, step,j;
	
	for(i=0;i<tamanho;i++)
	{
		if(cod==estoque[i].codigo)
		{
			if(qtd<=estoque[i].quantidade)
			{
				
				estoque[i].quantidade = estoque[i].quantidade - qtd;
				j=i;
				while(estoque[j].quantidade<estoque[j+1].quantidade)
				{
				   step = estoque[i].quantidade;	
			       estoque[j].quantidade = estoque[j+1].quantidade;
				   estoque[j+1].quantidade = step;
				   
				   j++;	
				}
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
}

void main()
{
	TEstoque estoque[TAM];
	int q, c, resp;
	
	printf("Forneca o codigo: \n");
	scanf("%d", &c);
	
	printf("Forneca a quantidade desejada: \n");
	scanf("%d", &q);
	
	if(funcao(q, c, estoque, TAM)==1)
	{
		printf("Ha disponibilidade do produto. \n");
		
	}
	else
	{
		printf("Nao ha disponibilidade do produto. \n");
	}
	
}
