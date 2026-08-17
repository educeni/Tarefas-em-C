#include <stdio.h>
#include <string.h>
#define TAM 50
/*Exercício:

Considere a existência de um vetor no qual cada posição pode armazenar o nome do aluno,
as notas de AV1 e AV2, sua média e a situação (aprovado, reprovado ou em AVF). Pede-se:

A declaração do vetor, assim como de todos os tipos de dados necessários, caso
existam;

Uma função que leia os dados de todos os alunos da turma;

Uma função que calcule a média de cada aluno (e a armazene no vetor), assim como a
sua situação;

Uma função que, dado um número inteiro (1-aprovado;2-reprovado;3-em AVF), exiba
todos os alunos que estão nesta situação.*/

typedef struct {
	char nome[TAM];
	float nota1,
	      nota2,
	      media;
	char situacao[10]; 
} TAluno;

void leitura(int tamanho, TAluno alunos[3])
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		printf("Forneca o nome: \n");
		scanf("%s", &alunos[i].nome);
		printf("Forneca a primeira nota: \n");
		scanf("%f", &alunos[i].nota1);
		printf("Forneca a segunda nota: \n");
		scanf("%f", &alunos[i].nota2);
	}
}

void mediaAluno(TAluno alunos[3], int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
		if(alunos[i].media >=6)
		{
			strcpy(alunos[i].situacao, "Aprovado");
		}
		else if((alunos[i].media <6)&&(alunos[i].media>=4))
		{
			strcpy(alunos[i].situacao, "AVF");
		}
		else if(alunos[i].media <4)
		{
			strcpy(alunos[i].situacao, "Reprovado");
		}
	}
	
}

void situacaoAlunos(int num, TAluno alunos[3], int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		if((num==2)&&(alunos[i].media<4))
		{
			printf("Este aluno esta reprovado: %s", alunos[i].nome);
		}
		else if((num==3)&&(alunos[i].media>=4)&&(alunos[i].media<6))
		{
			printf("Este aluno esta na AVF: %s", alunos[i].nome);
		}
		else if((num==1)&&(alunos[i].media>=6))
		{
			printf("Este aluno esta aprovado: %s", alunos[i].nome);
		}
	}
}

void main()
{
	TAluno alunos[3];
	int n;
	
	leitura(3, alunos);
	
	printf("1-aprovado;2-reprovado;3-em AVF\n\n");
	printf("Forneca um numero: \n\n");
	scanf("%d", &n);
	
	mediaAluno(alunos, 3);
	situacaoAlunos(n, alunos, 3);
	
}
