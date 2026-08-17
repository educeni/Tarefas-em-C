#include <stdio.h>
/* Questão 02:

Considerando o critério de avaliação da FAETERJ-
Rio, considere que as notas de AV1 e AV2 de uma

turma estejam armazenadas em um arquivo texto,
de forma que na primeira linha esteja o nome do
aluno e na seguinte as suas duas notas (AV1 e AV2).
Na próxima linha virá o nome de um novo aluno,
seguido, na linha abaixo, de suas notas. E assim
sucessivamente.
Desenvolver uma função que, dado um arquivo
nesse formato, crie outros três (um para cada
possível situação: Aprovados, Reprovados, AVF)
contendo, na primeira linha, o nome do aluno, e na
seguinte a sua média. */

// Protótipo das funções


// Implementação das funções
int base(char nomeArquivo[])
{
	int i2, i, media=0;
	char c;
	FILE *arq
	
	arq = fopen(nomeArquivo,"r");
	
	while (fscanf(arq, "%d", &i2)!=EOF)
	{
		media = (i+i2)/2;
		i = i2;
		
	}
	
}


void main()
{
	char nomeArquivoA[30];
		
	printf("Forneca o nome do arquivo: ");
	gets(nomeArquivoA);
	
	
}
