#include <stdio.h>

/*QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/
/* parametro = ////// retorno = quantidade e maior numero */

float funcao(float *maior, int *quant)
{
	int i=0, max=-1000000, numero;
	
	do
	{
		printf("Forneca um numero: \n");
		scanf("%d", &numero);
		i++;
		
		if(numero>max)
		{
			max = numero;
		}
	}
	while(numero!=0);
	
	*quant = i-1;
	*maior = max;
}

void main()
{
	float maisGrande; 
	int quantidade;
	
	funcao(&maisGrande, &quantidade);
	
	printf("Este e o maior numero: %.1f  e este e a quantidade de numero digitados: %d\n\n", maisGrande, quantidade);
}
