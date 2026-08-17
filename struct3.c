#include <stdio.h>
#include <string.h>
#define QUANT 5
/* Questão 03:
Considere a existência de um vetor de structs
com quant posições, onde cada uma destas
armazena os seguintes dados sobre os
funcionários de uma empresa: matricula (int),
nome (string), gênero (char) e salário (float).
Pede-se uma função que, dado um gênero,
desloque todos os funcionários deste gênero
para o início do vetor (e, consequentemente, os
funcionários do outro gênero ficarão ao final do
conjunto).*/
/* parametro = genero, struct funcionarios ///// retorno =  */

typedef struct{
	int matricula;
	char nome[50];
	char genero;
	float salario;
	
}TFuncionario;

void funcao(TFuncionario funcionario[QUANT], int tamanho, char genero)
{
	int i, j;
	TFuncionario step;
	
	for(i=0;i<tamanho;i++)
	{
		if(funcionario[i].genero == genero)
		{
			j=i;
			while(funcionario[j].genero!=funcionario[j-1].genero)
			{
				step=funcionario[j];
				funcionario[j] = funcionario[j-1];
				funcionario[j-1] = step;
				j--;
			}
		}
	}
}

void main()
{
	TFuncionario funcionario[QUANT];
	char g;//m ou f
	
	printf("\tM- MASCULINO //// F- FEMININO\n");
	printf("forneca o caractere do genero: \n");
	scanf("%c", &g);
	
	funcao(funcionario, QUANT, g);
}
