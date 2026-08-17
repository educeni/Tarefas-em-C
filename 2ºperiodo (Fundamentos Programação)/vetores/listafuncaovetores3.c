#include <stdio.h>
/* QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci. */
/* parametro = n ésimo //// retorno = numero nésimo */

int funcao(int n)
{
	int i, n1=0, n2=1, n3;
	
	
	for(i=2;i<=n;i++)
	{
		n3 = n1;
		n1=n2;
		n2= n1+n3;

	}
	return n2;
}

void main()
{
	int numero, resposta;
	
	printf("Forneca um numero: \n");
	scanf("%d", &numero);
	
	resposta = funcao(numero);
	printf("Este e o n esimo numero na escala fibonacci: %d\n", resposta);
}
