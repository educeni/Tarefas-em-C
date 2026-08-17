#include <stdio.h>
#include <string.h>
#define TAM 5
/* Questão 07:
Questão 02:
Suponha a existência de um vetor de tamanho
TAM, cada posição armazenando o nome da
pessoa e a sua data de aniversário
(representada por um struct do tipo TData,
contendo os campos dia e mes). Pede-se o
desenvolvimento das seguintes funções:
? Determinar a quantidade de pessoas que
fazem aniversário no mês M;
? Exibir os nomes de todas pessoas que fazem
aniversário entre as datas d1 e d2, ambas
do tipo TData.*/
/*parametro = mes m, struct pessoa, d1 e d2, struct data //// retorno =  */

typedef struct{
	int mes;
	int dia;
}TData;


typedef struct{
	char nome[15];
	TData aniversario;
	
}TPessoa;

int funcao(TData d1, TData d2, int mes, TPessoa pessoa[TAM], int tamanho)
{
	int i, qtd=0;
	TData step;
	
	if((d1.mes>d2.mes)||((d1.mes==d2.mes)&&(d1.dia>d2.dia)))
	{
		step = d1;
		d1= d2;
		d2=step;
	}
	for(i=0;i<tamanho;i++)
	{
		if(mes==pessoa[i].aniversario.mes)
		{
			qtd++;
		}
		
		if((d1.mes>pessoa[i].aniversario.mes)||((d1.mes==pessoa[i].aniversario.mes)&&
		(d1.dia<=pessoa[i].aniversario.dia))&&((d2.mes<pessoa[i].aniversario.mes)||((d2.mes==pessoa[i].aniversario.mes)&&(d2.dia<=pessoa[i].aniversario.dia))))
		{
			printf("%s", pessoa[i].nome);
			
		}	
	}
	
	return qtd;
}

void main()
{
	TPessoa pessoa[TAM];
	int m, resp;
	TData d1,d2;
	
	printf("Forneca o mes: \n");
	scanf("%d", &m);
	
	printf("Forneca o primeiro dia desejado: \n");
	scanf("%d", &d1.dia);
	
	printf("Forneca o primeiro mes desejado: \n");
	scanf("%d", &d1.mes);
	
	printf("Forneca o segundo dia desejado: \n");
	scanf("%d", &d2.dia);
	
	printf("Forneca o segundo mes desejado: \n");
	scanf("%d", &d2.mes);
	
    resp = funcao(d1, d2, m, pessoa, TAM);
	
}
