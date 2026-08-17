#include <stdio.h>
/* QUESTÃO 04: A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
salário e número de filhos. A prefeitura
deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até
R$ 1.000,00. */

void main(){
	
	int i, filho, somaFilho=0, quantidade=0, percentualAte1000;
	float salario, mediaSalarial, maiorSalario=0, mediaFilho, somaSalario;
	
	for(i=1;i<=3;i++)
	{
		
		printf("Informe o seu salario: \n");
		scanf("%f", &salario);
		
		printf("Forneca a quantidade de filhos: \n");
		scanf("%d", &filho);
		
		somaSalario+=salario;
		
		somaFilho+=filho;
		
		if(salario>maiorSalario)
		{
			maiorSalario = salario;
		}
		
		if(salario<=1000)
		{
			quantidade++;
		}
	}
	mediaSalarial = somaSalario/3;
	printf("Esta e a media salarial da populacao: %.2f\n", mediaSalarial);
	mediaFilho = somaFilho/3;
	printf("Esta e a media de filhos da poulacao: %.0f\n", mediaFilho);
	printf("Este e o maior salario: %.2f\n", maiorSalario);
	percentualAte1000 = (quantidade/3)*100;
	printf("Este e o percentual de pessoas com salario ate R$1000,00: %d%", percentualAte1000);
}
