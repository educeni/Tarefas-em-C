#include <stdio.h>
#include <string.h>
#define TAM 5
/* Questão 04:
Considere a existência de um vetor de structs
com quant posições, onde cada uma destas
armazena os seguintes dados sobre um grupo
de pessoas: nome (string), gênero (char) e
idade (int). Pede-se uma função que determine
se os elementos deste vetor estão ordenados e
retorne 1, caso estejam ordenados, e 0, caso
contrário.
Observação: o vetor será considerado ordenado se
estiver organizado crescentemente em função da
idade. Porém, no caso de pessoas com a mesma
idade, estas devem estar ordenadas crescentemente
pelo nome. */
/* parametro =  ///// retorno = 1 se for ordenado , 0 se nao for */

typedef struct{
	char nome[50];
	char genero;
	int idade;
	
}TPessoa;

int funcao(TPessoa pessoa[TAM], int tamanho)
{
	int i,j;
	
	for(i=0;i<tamanho;i++)
	{
		if(pessoa[i].idade<pessoa[i+1].idade)
		{
			return 0;
			
		}
		if(pessoa[i].idade==pessoa[i+1].idade)
		{
			for(j=0;j<50;j++)
			{
				if(strcmp(pessoa[i].nome,pessoa[i+1].nome)>1)
				{
					
					return 0;
				}
			}
		}
		
	}
	return 1;
}

void main()
{
	TPessoa pessoa[TAM];
	int resp;
	
	resp = funcao(pessoa, TAM);
	printf("%d", resp);
}
