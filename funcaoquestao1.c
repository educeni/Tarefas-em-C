#include <stdio.h>
/* QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B. */

/* com parametro ex: int .... (????)
s/ retorno */

// função
void funcao (int n, int a, int b)
{
	int i;
	
	for(i=a;i<=b;i++)
	{
		if(i%n==0)
		{
			printf("%d ", i);
		}
	}
}
void main()
{
	int partida, saida, base;
	
	printf("Forneca um valor: \n");
	scanf("%d", &base);
	printf("Forneca um valor de partida do intervalo: \n");
	scanf("%d", &partida);
	printf("Forneca um valor final do intervalo: \n");
	scanf("%d", &saida);
	
	funcao (base, partida, saida);
	
}

