#include <stdio.h>
/* QUESTÃO 01:
Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B. */
/* parametro = (n, intervalo A e B)  ///// retorno =  */

void funcao(int n, int a, int b)
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
	int numero, inicio, fim;
	
	printf("Forneca o numero: ");
	scanf("%d", &numero);
	printf("Forneca o intervalo: ");
	scanf("%d %d", &inicio, &fim);
     
	funcao(numero, inicio, fim);	
}
