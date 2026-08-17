/*
	FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 26/03/2026

	Lista de Exercícios VIII (Structs):
	
	Questão 01:
	Uma loja de automóveis mantém os carros à venda sob a forma de um 
	vetor de structs contendo as seguintes informações, para cada veículo: 
	placa, modelo, marca, cor, quilometragem, ano modelo/fabricação (deve 
	ser um struct), valor e tipo (usado ou 0 km, conforme o valor do 
	campo quilometragem). 
	
	Pede-se a declaração de uma variável que represente o estoque de 
	veículos da loja, incluindo todas as declarações de tipos que possam 
	ser necessárias.
	
	Além disso, implementar as seguintes funções: 
	i.   Exibir todos os carros do modelo m, ano de fabricação entre a1 e 
	     a2 (inclusive), com valor não superior a x reais;
	ii.	 Reajustar os valores de todos os carros 0 km, considerando um 
	     aumento de p %;
	iii. Retirar do estoque um determinado veículo, dada a sua placa.
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>
#define TAM 3


typedef struct{
	
	int modelo;
	int fabricacao;
}TAno;

typedef struct{
	
	char placa[10];
	char marca[10], modelo[10], cor[10];
	int tipo;
	float quilometragem;
	TAno ano; 
	float valor;
	
	
}TVeiculo;



void exibiri(char modelo[10], int tamanho, int ano1, int ano2, float preco, TVeiculo carro[TAM])
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		if((strcmp (carro[i].modelo, modelo) == 0)&&(carro[i].ano.fabricacao>=ano1)&&(carro[i].ano.fabricacao<=ano2)&&(carro[i].valor<=preco))
		{
			printf("Esta e a placa do carro: %d", carro[i].placa);
			printf("Este e o tipo do carro: %c", carro[i].tipo);
			printf("Esta e a marca do carro: %s", carro[i].marca);
			printf("Esta e a cor do carro: %s", carro[i].cor);
			printf("Esta e a quilometragem do carro: %.2f", carro[i].quilometragem);
			printf("Este e o valor do carro: %.2f", carro[i].valor);
			
		}
	}
}

void reajusteValor(float aumento, TVeiculo carro[TAM], int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		if(carro[i].tipo == 0)
		{
			carro[i].valor += carro[i].valor * (aumento/100);
			
		}
	}
}

int removerCarro(TVeiculo carro[TAM], int *tamanho, int placa)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		if(strcmp(carro[i].placa,placa) == 0)
		{
			while(i<tamanho)
			{
				strcpy(carro[i].placa, carro[i+1].placa); 
				//...
				i++;
			}
		}
		(*tamanho)--;
		return 1;
	}
	return 0;
}

void main()
{
	TVeiculo carro[TAM] = {{"ABC1234","Honda", "Civic", "Preto", 1, 0, {2022, 2021}, 120000.0},
                          {"DEF5678","Toyota", "Corolla", "Branco", 0, 50000, {2020, 2019}, 90000.0},
                          {"GHI9012","Honda", "Civic", "Prata", 0, 30000, {2018, 2017}, 80000.0}};

      char m[10], a1[10], a2[10];	
	  float x, p;
	  int placaRemover, quantidade = TAM;
	
	printf("forneca o ano: \n");
	scanf("%s", &a1);
	printf("forneca o ano: \n");
	scanf("%s", &a2);
	printf("Forneca o modelo: \n");
	scanf("%s", &m);
	printf("Forneca o valor maximo: \n");
	scanf("%f", &x);
	printf("Forneca o aumento: \n");
	scanf("%f", &p);
	printf("Forneca a placa do carro a ser removido: \n");
	scanf("%d", &placaRemover);
	
	exibiri(carro.modelo, TAM, a1, a2, x, carro);
	reajusteValor(p, carro, TAM, carro.tipo, carro.valor);
	removerCarro(carro, &quantidade, placaRemover);
}
